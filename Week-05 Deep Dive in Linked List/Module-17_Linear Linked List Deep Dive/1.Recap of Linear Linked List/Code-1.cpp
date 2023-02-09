#include<bits/stdc++.h>
using namespace std;
// Recap of Linear Linked List
class Node
{
public:
    int value;
    Node *Next;  //Node type pointer


    //Construction Creation
    Node(int val)
    {
        value = val;
        Next = NULL;
    }

};

void insertAtTail(Node* &head,int val) //Here we will work with head address
{
    Node *newNode = new Node(val);

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;  //copy head in temp

    while(temp->Next != NULL)
    {
        temp = temp->Next;
    }

    temp->Next = newNode;

}

void insertAtHead(Node* &head,int val)
{
    //step-1:NewNode Creation
    Node* newNood = new Node(val);   //parameter

    //Step-2:Update of newNode->Next
    newNood->Next = head;

    //Step-3:Update of head
    head = newNood;
}


void display(Node *n)  //Node type pointer
{
    while(n != NULL)
    {
        cout<<n->value;
        if(n->Next != NULL)
            cout<<" -> ";
        n = n->Next;  //To drive loop
    }
    cout<<endl<<endl;

}
int main()
{
    Node *head = NULL;

    //we can take input from user:

    int Value;

    //Choice 1:Insertion at Head
    //Choice 2:Insertion at Tail
    cout<<"Choice 1:Insertion at Head"<<endl
        <<"Choice 2:Insertion at Tail"<<endl
        <<"Choice 0:Exit"<<endl
        <<endl;
    cout<<"Next Choice: ";
    int choice;
    cin>>choice;

    while(choice != 0)
    {
        cout<<"Enter the Value: ";
        cin>>Value;
        //Instead of if/else we will use Switch
        switch(choice)
        {
        case 1:
            insertAtHead(head,Value);
            break;
        case 2:
            insertAtTail(head,Value);
            break;
        default:
            break;

        }
        cout<<"Next Choice: ";
        cin>>choice;

    }


    display(head);




    return 0;
}


