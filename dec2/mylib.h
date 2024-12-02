#ifndef MYLIB_H
#define MYLIB_H

#include <iostream>

struct URL {
    char url[512]; // wrap in a struct for copyability
};

class URLStack {
public:
    URLStack(int capacity);
    URLStack(const URLStack &other);
    ~URLStack();

    URLStack & operator=(const URLStack &other);
    
    bool empty() const;
    bool full() const;
    void push(const char *url);
    URL pop();
    URL peek() const;

    
    friend std::ostream &operator<<(std::ostream &out, const URLStack &s);
private:
    struct Node {
        URL data;
        Node *next;
    };
    Node *head; // pointer to the head node
    int capacity;
    int size; // number of elements in the stack
};

#endif // MYLIB_H
