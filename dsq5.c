// Write a C program to Convert infix expression to postfix expression and evaluate a postfix Expression


#include <stdio.h>
#include <ctype.h>
#include <math.h>

#define MAX 100


char opStack[MAX];
int valStack[MAX];
int topOp = -1, topVal = -1;

void pushOp(char x) { opStack[++topOp] = x; }
char popOp() { return opStack[topOp--]; }

void pushVal(int x) { valStack[++topVal] = x; }
int popVal() { return valStack[topVal--]; }


int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}


void infixToPostfix(char infix[], char postfix[]) {
    int i = 0, j = 0;

    while (infix[i] != '\0') {
        char ch = infix[i];

        if (isdigit(ch)) {
            postfix[j++] = ch;
        }
        else if (ch == '(') {
            pushOp(ch);
        }
        else if (ch == ')') {
            while (opStack[topOp] != '(')
                postfix[j++] = popOp();
            popOp(); 
            // remove '('
        }
        else { // operator
            while (topOp != -1 && precedence(opStack[topOp]) >= precedence(ch))
                postfix[j++] = popOp();
            pushOp(ch);
        }

        i++;
    }

    while (topOp != -1)
        postfix[j++] = popOp();

    postfix[j] = '\0';
}


int evaluatePostfix(char postfix[]) {
    int i = 0;

    while (postfix[i] != '\0') {
        char ch = postfix[i];

        if (isdigit(ch)) {
            pushVal(ch - '0');
        }
        else {
            int b = popVal();
            int a = popVal();

            if (ch == '+') pushVal(a + b);
            if (ch == '-') pushVal(a - b);
            if (ch == '*') pushVal(a * b);
            if (ch == '/') pushVal(a / b);
        }

        i++;
    }

    return popVal();
}

int main() {
    
    
    char infix[MAX], postfix[MAX];

    printf("Enter expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);
    printf("Postfix: %s\n", postfix);

    int result = evaluatePostfix(postfix);
    printf("Result: %d\n", result);

    return 0;
}




