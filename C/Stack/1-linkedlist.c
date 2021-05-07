#include <stdio.h> 
#include <stdlib.h> 

// Node structure
struct Node {
    int data;
    struct Node* next; // pointer to next element
};

struct Node* top = NULL;

void push(int data) {
    struct Node* temp = 
        (struct Node*)malloc(sizeof(struct Node)); // allocating memory for new Node
    temp->data = data;
    temp->next = top; // new node points to last node (top) if exist
    top = temp; // updating top to just created new Node
    return;
}

void pop() {
    struct Node* temp = top;
    if (temp == NULL) return; // if there is no nodes, nothing to delete
    top = top->next; // moving top to next node
    free(temp); // and completely removing old node from memory
}

void printStack() {
    struct Node* temp = top;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
    return;
}

int main() {
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    printStack(); // 5 4 3 2 1
    pop();
    printStack(); // 4 3 2 1
    return 0;
}