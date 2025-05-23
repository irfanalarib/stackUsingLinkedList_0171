#include <iostream>

using namespace std;

// node class representing a single node is the linked list
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

// Stack class
class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }

    int push(int value)
    {
        Node *newNode = new Node(); // 1. allocate memory for the new node
        newNode->data = value;      // 2. assign value
        newNode->next = top;        // 3. set the next pointer of the new node to the current top
        top = newNode;              // 4. update the top pointer to the new node
        cout << "push value: " << value << endl;
        return value;
    }

    // pop oretation : remove the topmost element from the stack
    void pop()
    {
        if (isEmpty())
        {
            cout << "stack is empty. " << endl;
        }

        Node *temp = top; // crate a temporary pointer to the top node
        top = top->next;
        cout << "popped value: " << top->data << endl;
    }
    // peek/top operation: retrieve the value of the topmost element without removing
    void peek()
    {
        if (top == NULL)
        {
            cout << "list is empty." << endl;
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        } // return the value of the top node
    }
    // isempty operation:check if the stack is empty
    bool isEmpty()
    {
        return top == NULL; // RETURN TRUE IF THE TOP POINTER S NULL,INDICATION
    }
};

int main()
{
    Stack stack;

    int choice = 0;
    int value;

    while (choice != 5)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "1. Peek\n";
        cout << "1. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value to push: ";
            cin >> value;
            stack.push(value); // push the entered value onto te stack
            break;

        case 2:
            if (!stack.isEmpty())
            {
                stack.pop(); // pop the top element from the stack
            }
            else
            {
                cout << "Stack is empty. cannot pop." << endl;
            }
            break;
        case 3:
            if (!stack.isEmpty())
            {
                stack.peek(); // get the value of the top element
            }
            else
            {
                cout << "stack is empty.no top value." << endl;
            }
            break;
        case 4:
            cout << "Exiting program. " << endl;
            break;
        default:
            cout << "Invalid choice. Try again" << endl;
            break;
        }
        cout << endl;
    }
    return 0;
}