#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

//   TEMPLATE LINKED-LIST QUEUE
template <class T>
class Queue {
private:
    struct Node {
        T data;
        Node* next;
        Node(T val) : data(val), next(nullptr) {}
    };

    Node* frontPtr;
    Node* rearPtr;
    int count;

public:
    Queue();
    ~Queue();

    void push(T val);
    void pop();
    T front() const;
    bool empty() const;
    int size() const;

    void move_to_rear();     // required for assignment
    void displayAll();       // helper for main
};

#include "Queue.cpp" // Template linking

#endif
