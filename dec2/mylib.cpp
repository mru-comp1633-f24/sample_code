#include "mylib.h"
#include <cstring>
using namespace std;

URLStack::URLStack(int capacity) {
    head = nullptr;
    this->capacity = capacity;
    size = 0;
}


URLStack::URLStack(const URLStack &other) {
    size = 0;
    capacity = other.capacity;
//    head = other->head; // no good, shallow copy
    head = nullptr;
    Node *curr = other.head;
    while (curr) {
        push(curr->data.url);
        curr = curr->next;
    }
}

URLStack::~URLStack() {
    Node *curr = head;
    while (curr) {
        Node *next = curr->next;
        delete curr;
        curr = next;
    }
}

URLStack& URLStack::operator = (const URLStack &other) {
    if (this == &other) // check for self-assignment
        return *this;

    while (!empty()) // destroy existing data
        pop();

    Node *curr = other.head; // copy the contents of other
    capacity = other.capacity;
    size = 0;
    head = nullptr;
    while (curr) {
        push(curr->data.url);
        curr = curr->next;
    }

    
    return *this;
}

// Linked list version (V2)
bool URLStack::empty() const {
    return size == 0;
}

bool URLStack::full() const {
    return size == capacity;
}

URL URLStack::peek() const {
    URL nothing = {};
    if (empty())
        return nothing;
    return head->data;
}

// Linked list version (V2)
void URLStack::push(const char *s) {
    if (full())
        return;
    Node *new_node = new Node;
    strcpy(new_node->data.url, s);
    new_node->next = head;
    head = new_node;
    size++;
}

URL URLStack::pop() {
    URL nothing = {""};
    if (empty())
        return nothing;
    URL data = head->data;
    Node *next = head->next;
    delete head;
    head = next;
    size--;
    return data;
}

std::ostream &operator<<(std::ostream &out, const URLStack &s) {
    URLStack::Node *curr = s.head;
    out << "Stack contents:\n";
    while (curr) {
        out << curr->data.url << endl;
        curr = curr->next;
    }
    return out;
}
