// Write a menu driven program to implement the below functionality of Queues 1. Enqueue 2. Dequeue 3. Display 4. Exit

#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

// Enqueue operation
void enqueue() {
  int value;

  if (rear == MAX - 1) {
    printf("Queue Overflow\n");
  } else {
    printf("Enter value to enqueue: ");
    scanf("%d", &value);

    if (front == -1) {
      front = 0;
    }

    rear++;
    queue[rear] = value;
  }
}

// Dequeue operation
void dequeue() {
  if (front == -1 || front > rear) {
    printf("Queue Underflow\n");
  } else {
    printf("Deleted element: %d\n", queue[front]);
    front++;
  }
}

// Display operation
void display() {
  int i;

  if (front == -1 || front > rear) {
    printf("Queue is empty\n");
  } else {
    printf("Queue elements are:\n");
    for (i = front; i <= rear; i++) {
      printf("%d ", queue[i]);
    }
    printf("\n");
  }
}

int main() {
  int choice;

  do {
    printf("\n--- QUEUE MENU ---\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Display\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      enqueue();
      break;
    case 2:
      dequeue();
      break;
    case 3:
      display();
      break;
    case 4:
      printf("Exiting program...\n");
      break;
    default:
      printf("Invalid choice\n");
    }

  } while (choice != 4);

  return 0;
}
