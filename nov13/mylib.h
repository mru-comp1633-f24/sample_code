#ifndef MYLIB_H
#define MYLIB_H

#include <iostream>

struct Node {
    int data;
    Node *next;
};

void insert(Node *&head, int value);
void remove(Node *&head, int value);
void print(Node *head);

#endif // MYLIB_H
