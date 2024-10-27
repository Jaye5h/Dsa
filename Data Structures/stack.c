#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push(int data) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        stack[++top] = data;
    }
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    } else {
        return stack[top--];
    }
}

int main() {
    push(10);
    push(20);
    printf("Popped element: %d\n", pop()); // Pops 20
    return 0;
}
