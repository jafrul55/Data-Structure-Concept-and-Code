#include <bits/stdc++.h>
using namespace std;

template <typename N>
class Node
{

public:
    N value;
    Node *next;
    Node *prev;

    Node(N Val)
    {
        value = Val;
        next = NULL;
        prev = NULL;
    }
};
// Stack <float> st
template <typename S>
class Stack
{

    Node<S> *head;
    Node<S> *top;
    int count = 0;

public:
    // Write here a Construction to initiate
    Stack()
    {
        head = NULL;
        top = NULL;
    }
    // PUSH Operation:
    void Push(S val)
    {
        Node<S> *newNode = new Node<S>(val);

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
    S Pop()
    {
        Node<S> *delNode;
        delNode = top;
        S chk;
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
    int Size()
    {

        return count;
    }

    // TOP
    S Top()
    {
        S chk;
        if (top == NULL)
        {
            cout << "Stack Underflow |There is no element in top" << endl;
        }
        else
        {
            return top->value;
        }
        return chk;
    }
};
