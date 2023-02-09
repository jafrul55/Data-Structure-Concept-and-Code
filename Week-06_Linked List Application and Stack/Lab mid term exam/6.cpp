#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *Next;


    Node(int Val)
    {
        value = Val;
        Next = NULL;
    }
};

void insertAtTail(Node* &head,int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node* temp = head;

    while(temp->Next != NULL)
    {
        temp=temp->Next;

    }
    temp->Next = newNode;


}



void updatedisplay(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        if(temp->value % 2 == 0)
        {
            temp->value = -1;
        }
        temp=temp->Next;
    }

}



void display(Node *n)
{
    while(n!= NULL)
    {
        cout<<n->value;
        if(n->Next != NULL)
        {
            cout<<"->";
        }
        n=n->Next;
    }
    cout<<endl;
}

int main()
{

    Node *head = NULL;
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
        insertAtTail(head,array[i]);
    }

    updatedisplay(head);
    cout<<endl;
    display(head);



    return 0;
}
