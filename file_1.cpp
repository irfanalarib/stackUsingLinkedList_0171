#include <iostream>

using namespace std;

//node class representing a single node is the linked list
class Node {
    public:
    int data;
    Node* next;

    Node(){
        next = NULL;
    }
};

//Stack class
class Stack {
    private:
    Node* top;

    public:
    Stack(){
        top = NULL;
    }

    int push(int value){
        Node* newNode =new Node();//1. allocate memory for the new node
        newNode->data = value; //2. assign value
        newNode->next = top; //3. set the next pointer of the new node to the current top
        top = newNode; //4. update the top pointer to the new node
        cout << "push value: " << value<< endl;
        return value;
    }

    //pop oretation : remove the topmost element from the stack
    void pop(){
        if(isEmpty()){
            cout << "stack is empty. " << endl;
        }

    Node* temp = top;//crate a temporary pointer to the top node
    top = top->next;
    cout << "popped value: " <<top->data << endl;
    }
    //peek/top operation: retrieve the value of the topmost element without removing
    void peek(){
        if (top == NULL)
        {
            cout << "list is empty." << endl;
        }
        else{
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        } //return the value of the top node
    }
    // isempty operation:check if the stack is empty
    bool isEmpty()
    {
        return top==NULL;  //RETURN TRUE IF THE TOP POINTER S NULL,INDICATION
    }
};