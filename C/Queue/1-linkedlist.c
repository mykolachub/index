#include <stdio.h> 
#include <stdlib.h> 

// Node structure
struct Node {
    int data;
    struct Node* next; // pointer to next element
};

struct Node* head = NULL;
struct Node* tail = NULL;

// push to the end
void Enqueue(int data) {
    // creating new Node, allocating memory for structure
    struct Node* temp = 
        (struct Node*)malloc(sizeof(struct Node));
    temp->data = data; // Node's data
    temp->next = NULL; // next element will be undefined, so this Node is last in the queue
    // if there is no elements yet, create one
    if (head == NULL && tail == NULL) {
        head = temp;
        tail = temp;
        return;
    }
    // if we do have elements, then just add new one to the end
    tail->next = temp; // last element points to new node
    tail = temp; // real address of tail changes to address of new node
    return;
}

void Dequeue() {
    struct Node* temp = head; // copying head
    if (head == NULL) return; // if there is no element 
    if (head == tail) { // if there is only one element
        head = NULL;
        tail = NULL;
    }
    else {
        head = head->next; // moving head to the next element
    }
    free(temp); // completely removing Node from memory
    return;
}

void PrintQueue() {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}


int main() {
    Enqueue(1); PrintQueue(); // 1
    Enqueue(2); PrintQueue(); // 1 2
    Enqueue(3); PrintQueue(); // 1 2 3
    Dequeue();  PrintQueue(); // 2 3
    Enqueue(4); PrintQueue(); // 2 3 4
    
    return 0;
}