// Problem Statement

// Design a stack using an array with the following operations:

// push(x) → Insert element
// pop() → Remove top element
// peek() → Get top element
// isEmpty() → Check if stack is empty

// Also handle overflow and underflow conditions.


#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int stack[MAX];
int top = -1;

// Check if stack is empty
int isEmpty() {
    return top == -1;
}

// Check if stack is full
int isFull() {
    return top == MAX - 1;
}

// Push operation
void push(int x) {
    if (isFull()) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = x;
    printf("Pushed: %d\n", x);
}

// Pop operation
void pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
        return;
    }
    printf("Popped: %d\n", stack[top--]);
}

// Peek operation
void peek() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return;
    }
    printf("Top: %d\n", stack[top]);
}

// Main function
int main() {
    push(10);
    push(20);
    push(30);

    pop();
    peek();

    return 0;
}
