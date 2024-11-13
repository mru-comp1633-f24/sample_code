#include "mylib.h"
#include <iostream>

using namespace std;

void insert(Node *&head, int value) {
    Node *to_add = new Node;
    to_add->data = value;
    to_add->next = nullptr;

    if (!head) {
        // special case: empty list
        head = to_add;
        return;
    }
    
    Node *prev = nullptr;
    Node *current = head;

    while (current && current->data < value) {
        prev = current;
        current = current->next;
    }

    if (!prev) {
        // special case: add to head
        to_add->next = head;
        head = to_add;
    } else {
        // add to middle or end of list
        to_add->next = prev->next;
        prev->next = to_add;
    }
}

void remove(Node *&head, int value) {
    Node *prev = nullptr;
    Node *current = head;
    while (current && current->data != value) {
        prev = current;
        current = current->next;
    }
    
    if (current) {
        // found a match
        if (prev) {
            // middle of the list, disconnect the node
            prev->next = current->next;
        } else {
            // new head
            head = current->next;
        }
        // either way, free the memory
        delete current;
    }
}
            
void print(Node *head) {
    Node *current = head;
    cout << '[';
    while (current) {
        cout << current->data;
        if (current->next) {
            cout << ", ";
        }
        current = current->next;
    }
    cout << "]\n";
}
