#include "mylib.h"
#include <iostream>
using namespace std;

int main() {
    Node *head = nullptr;
    head = new Node;
    head->data = 2;
    head->next = new Node;
    head->next->data = 3;
    head->next->next = nullptr;
    

    insert(head, 1); // insert empty
    print(head);
    
    insert(head, 7); // insert at end
    print(head);

    insert(head, 5); // insert middle
    print(head);

    insert(head, -1); // insert beginning
    print(head);

    remove(head, 7); // remove middle
    print(head);

    remove(head, 100); // remove non-existant
    print(head);

    remove(head, -1); // remove start
    print(head);

    remove(head, 5); // remove end
    print(head);

    remove(head, 1); // remove singleton
    print(head);

    remove(head, 100); // remove non-existant
    print(head);

    // clean up memory
    Node *current = head;
    while (current) {
        Node *to_delete = current;
        current = current->next;
        delete to_delete;
    }
    
    return 0;
}
