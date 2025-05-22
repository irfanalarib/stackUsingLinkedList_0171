#include <iostream>

using namespace std;

//node class representing a single node is the linked list
class node {
    public:
    int data;
    node * next;

    node(){
        next = NULL;
    }
};

//Stack class
class Stack {
    private:
    node* top;

    public:
    Stack(){
        top = NULL;
    }
};