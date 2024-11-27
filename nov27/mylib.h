#ifndef MYLIB_H
#define MYLIB_H

// Move n disks from src to dest, using spare as spare
void hanoi(int n, int src, int dest, int spare);

int get_valid_input();

struct Node {
    int data;
    Node *next;
};

int length(Node *head);

#endif // MYLIB_H
