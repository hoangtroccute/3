#include "insertionSort.h"

// Insert node in sorted linked list
void insertSorted(Node*& sorted, Node* newNode) {
    if (!sorted || newNode->data <= sorted->data) {
        newNode->next = sorted;
        sorted = newNode;
        return;
    }

    Node* temp = sorted;
    while (temp->next && temp->next->data < newNode->data) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// Perform insertion sort on linked list
void insertionSortLinkedList(Node*& head) {
    Node* sorted = nullptr;
    Node* current = head;

    while (current) {
        Node* next = current->next;
        current->next = nullptr;
        insertSorted(sorted, current);
        current = next;
    }

    head = sorted;
}

// Helper to display list
void displayList(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
