#include "Queue.h"
#include <iostream>
using namespace std;

template <class T>
Queue<T>::Queue() {
    frontPtr = nullptr;
    rearPtr = nullptr;
    count = 0;
}

template <class T>
Queue<T>::~Queue() {
    while (!empty()) pop();
}

template <class T>
void Queue<T>::push(T val) {
    Node* newNode = new Node(val);

    if (empty()) {
        frontPtr = rearPtr = newNode;
    }
    else {
        rearPtr->next = newNode;
        rearPtr = newNode;
    }

    count++;
}

template <class T>
void Queue<T>::pop() {
    if (empty()) return;

    Node* temp = frontPtr;
    frontPtr = frontPtr->next;

    delete temp;
    count--;

    if (frontPtr == nullptr)
        rearPtr = nullptr;
}

template <class T>
T Queue<T>::front() const {
    if (empty())
        throw runtime_error("Queue is empty.");
    return frontPtr->data;
}

template <class T>
bool Queue<T>::empty() const {
    return (count == 0);
}

template <class T>
int Queue<T>::size() const {
    return count;
}

template <class T>
void Queue<T>::move_to_rear() {
    if (empty()) return;
    T value = front();
    pop();
    push(value);
}

template <class T>
void Queue<T>::displayAll() {
    Queue<T> temp = *this; // copy queue
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
}
