

// Write a menu driven program to implement the below functionality of Stacks 1. Push 2. Pop 3. Display 4. Exit

#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

// PUSH
void push() {
    int value;
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        printf("Enter value to push: ");
        scanf("%d", &value);
        top++;
        stack[top] = value;
    }
}

// Pop 
void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("Deleted element: %d\n", stack[top]);
        top--;
    }
}

// Display 
void display() {
    int i;
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements are:\n");
        for (i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    int choice;

    do {
        printf("\n-- STACK MENU --\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
            push();
            break;
            
            case 2: 
            pop(); 
            break;
            
            case 3:
            display(); 
            break;
            
            case 4:
            printf("Exiting program...\n"); 
            break;
            
            default: printf("Invalid choice\n");
        }

    } while (choice != 4);

    return 0;
}
