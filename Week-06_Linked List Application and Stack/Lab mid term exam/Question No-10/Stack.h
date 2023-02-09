#include<bits/stdc++.h>
using namespace std;

template <typename N> class Node
{
public:
    N Value;
    Node* Next;
    Node* Prev;

    Node(N Val)
    {
        Value = Val;
        Next = NULL;
        Prev = NULL;
    }

};

template <typename S> class Stack
{
   Node <S> *head;
   Node <S> *top;
   int count = 0;

public:
    Stack()
    {
        head = NULL;
        top = NULL;
    }

    void Push(S Val)
    {
        Node <S> *newNode = new Node <S> (Val);
        if(head == NULL)
        {
            head = top = newNode;
            count++;
            return;
        }

        top->Next = newNode;
        newNode->Prev = top;
        top = newNode;
        count++;
    }

S Pop()
{
    Node <S> *delNode;
    delNode = top;
    S chk;
    if(head == NULL)
    {
        cout<<"Stack Underflow"<<endl;
        return chk;
    }
    if(top == head)
    {
        head = top = NULL;
    }
    else
    {
        top = delNode->Prev;
        top->Next = NULL;
    }

    chk = delNode->Value;
    delete delNode;
    count--;
    return chk;
}

bool empty()
{
    if(head == NULL) return true;
    else return false;
}

int Size()
{
    return count;
}

S Top()
{
    S chk;
    if(top == NULL)
    {
        cout<<"Stack Underflow| There is no element"<<endl;

    }
    else
    {
        chk = top->Value;
    }
    return chk;
}

S Mid()
{
    Node <S> * fast = head;
    Node <S> * slow = head;

    while(fast != NULL && fast->Next != NULL)
    {
        slow = slow->Next;
        fast = fast->Next->Next;
    }
    return slow->Value;

}

};
