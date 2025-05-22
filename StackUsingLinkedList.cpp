#include <iostream>

using namespace std;

// Node class representing a single node in the linked list
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
    Node *top; // Pointer to the top node of the stack

public:
    Stack()
    {
        top = NULL; // Initalize the stuck with a null top pointer
    }

    // Push opration: insert an element onto the top of the stack
    int push(int value)
    {
        Node *newNode = new Node(); // 1. Allocate memory for the new node
        newNode->data = value;      // 2. assign value
        newNode->next = top;        // 3. Set the next pointer of the new node to the current top
        top = newNode;              // 4. Update the top pointer to new node
        cout << "Push value: " << value << endl;
        return value;
    }

    //  Pop opration: Remove the topmost element form the stack
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
        }

        Node *temp = top; // create a temporary pointer to the top node
        top = top->next;  // Update the top pointer to the next node
        cout << "Popped value: " << top->data << endl;
    }

    // Peek/Top operation: Retrive the value of the
    void peek()
    {
        if (top == NULL)
        {
            cout << "List is empty. " << endl;
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
        } // Retrun the value
    }

    //
    bool isEmpty()
    {
        retrun top == NULL;
    }
};
int main()
{
    Stack stack;

    int choice = 0;
    int value;

    wihle(choice != 5)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value to push: ";
            cin >> value;
            stack.push(value);
            break;
        case 2:
            if(!stack.isEmpty())
            {
                stack.pop();
            }
            else
            {
                cout << "Stack is empty. Cannot pop." << endl;
            }
            break;
        case 3:
            if (!stack.isEmpty())
            {
                stack.peek();
            }
            else
            {
                cout << "Stack is empty. No top value." << endl;
            }
            break;

        case 4:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Try again." endl;
            break;
        }
        cout << endl;
    }
    return 0;
}