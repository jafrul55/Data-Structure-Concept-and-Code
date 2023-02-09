#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int Value;
    Node* Next;

    Node(int Val)
    {
        this->Value = Val;
        Next = NULL;
    }
};
void insertAtTail(Node* &head,int Val)
{
    Node* newNode = new Node(Val);
    if(head ==NULL)
    {
        head = newNode;
        return;
    }

    Node * temp = head;

    while(temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;

}

Node* reverseK(Node* &head,int k)
{
    //first time use here iteratively:
    Node* prevptr = NULL;
    Node* currenptr = head;
    Node* nextptr;
    int count = 0;
    while(currenptr != NULL && count<k)
    {
        nextptr = currenptr->Next;
        currenptr->Next = prevptr;
        prevptr = currenptr;
        currenptr = nextptr;
        count++;
    }

    //use here recursion:
    if(nextptr != NULL)
    {

    head->Next = reverseK(nextptr,k);

    }
   return prevptr;
}


void display(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->Value;
        if(temp->Next != NULL)
        {
            cout<<"->";
        }
        temp=temp->Next;
    }
}

int main()
{
    Node* head = NULL;
   int n;
   cin>>n;
   int array[n];
   for(int i=0;i<n;i++)
   {
       cin>>array[i];
       insertAtTail(head,array[i]);
   }
   int k;
   cin>>k;
   Node* newhead = reverseK(head,k);
   display(newhead);


    return 0;
}

