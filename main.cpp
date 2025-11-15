#include <iostream>
#include "Queue.h"
#include "search.h"
#include "insertionSort.h"

using namespace std;

int main() {

    cout << "==============================" << endl;
    cout << "      Q1: TEMPLATE QUEUE      " << endl;
    cout << "==============================" << endl;

    Queue<int> q;

    // Push 10 values
    for (int i = 1; i <= 10; i++)
        q.push(i);

    cout << "Queue elements: ";
    q.displayAll();

    cout << "Move front ? rear..." << endl;
    q.move_to_rear();

    cout << "After move_to_rear: ";
    q.displayAll();



    cout << "\n==============================" << endl;
    cout << "  Q2: RECURSIVE LAST SEARCH   " << endl;
    cout << "==============================" << endl;

    vector<int> arr = { 2, 5, 7, 5, 9, 5, 11 };
    int target = 5;

    int lastIndex = recursiveLastOccurrence(arr, target, arr.size() - 1);

    cout << "Last occurrence of " << target << " is at index: " << lastIndex << endl;



    cout << "\n==============================" << endl;
    cout << " Q3: INSERTION SORT (LIST)    " << endl;
    cout << "==============================" << endl;

    Node* list = nullptr;

    // Sample unsorted list
    int values[] = { 30, 10, 40, 20, 5 };
    for (int x : values) {
        Node* newNode = new Node(x);
        newNode->next = list;
        list = newNode;
    }

    cout << "Original list: ";
    displayList(list);

    insertionSortLinkedList(list);

    cout << "Sorted list:   ";
    displayList(list);

    return 0;
}
