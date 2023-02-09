#include <bits/stdc++.h>
using namespace std;
// Implementation of Stack
class Node
{

public:
    int value;
    Node *next;
    Node *prev;

    Node(int Val)
    {
        value = Val;
        next = NULL;
        prev = NULL;
    }
};
class Stack
{
    Node *head;
    Node *top;
    int count = 0;

public:
    // Write here a Construction to initiate
    Stack()
    {
        head = NULL;
        top = NULL;
    }
    // PUSH Operation:
    void push(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = top = newNode;
            count++;
            return;
        }

        top->next = newNode;
        newNode->prev = top;
        top = newNode;
        count++;
    }

    // POP Operation:
    int pop()
    {
        Node *delNode;
        delNode = top;
        int chk = -1;
        if (head == NULL) // There is No element in the Stack
        {
            cout << "Stack Underflow" << endl;
            return chk;
        }

        if (top == head) // There is only one element
        {
            head = top = NULL;
        }
        else // There is More than 1 element
        {
            top = delNode->prev;
            top->next = NULL;
        }

        chk = delNode->value;
        delete delNode;
        count--;
        return chk;
    }

    // EMPTY
    bool empty()
    {
        if (head == NULL)
            return true;
        else
            return false;
    }
    // SIZE
    int size()
    {

        return count;
    }

    // TOP
    int Top()
    {
        int chk;
        if (top == NULL)
        {
            cout << "Stack Underflow |There is no element in top" << endl;
            chk = -1;
        }
        else
        {
            chk = top->value;
        }
        return chk;
    }
};
