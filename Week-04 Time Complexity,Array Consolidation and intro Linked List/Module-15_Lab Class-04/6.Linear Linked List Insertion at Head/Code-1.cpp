#include<bits/stdc++.h>
using namespace std;
//Linear Linked List Insertion at Head:
//we will learn how to insert value in Head/Tail:
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

    int n;

    //Choice 1:Insertion at Head
    //Choice 2:Insertion at Tail
    cout<<"Choice 1:Insertion at Head"<<endl
    << "Choice 2:Insertion at Tail"<<endl
    << "Choice 3:Insertion at Exit"<<endl;
    int choice = 2;
    while(choice == 1 || choice == 2)
    {
        cout<<"Enter the Value: ";
        cin>>n;
        if(choice == 1) insertAtHead(head,n);
        else if(choice == 2) insertAtTail(head,n);
        // insertAtTail(head,n);
        cout<<"Next Choice: ";
        cin>>choice;

    }

//    insertAtTail(head,1);
//    insertAtTail(head,5);
//    insertAtTail(head,8);
//    insertAtTail(head,9);
//    insertAtTail(head,10);



//    Node *second = new Node();
//    Node *third = new Node();
//    Node *fourth = new Node();

//    head->value = 1;
//    second->value = 5;
//    third->value = 8;
//    fourth->value = 9;

//    head->Next = second;
//    second->Next = third;
//    third->Next = fourth;
//    fourth->Next = NULL;

    display(head);




    return 0;
}


