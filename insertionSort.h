#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include <iostream>
using namespace std;

// Linked List node for insertion sort
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

void insertSorted(Node*& sorted, Node* newNode);
void insertionSortLinkedList(Node*& head);
void displayList(Node* head);

#endif
#pragma once
