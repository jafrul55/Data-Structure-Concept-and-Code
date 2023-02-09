#include<bits/stdc++.h>
using namespace std;
//Search a Specific Value in Duplicate Enabled Linked List
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

struct Test  //we use here a structure
{
    int Position[1000];
};

void insertAtTail(Node* &head,int val);
void insertAtHead(Node* &head,int val);
void display(Node *n);
int countLength(Node* &head);
void insertionAtSpecificPosition(Node* &head,int pos,int val);
int searchByValueUnique(Node* &head,int val);
void searchByValueDuplicate(Node* &head,int val);
Test searchByValueDuplicateReturn(Node* &head,int key);
void searchByValueUnique(Node* &head,int searchValue,int Value);
void deletionAtHead(Node* &head);
void deletionAtTail(Node* &head);
void deletionAtSpecificPosition(Node* &head,int position);







//Circular Linked List Part-1:
void insertAtTailcircular(Node* &head,int val) //Here we will work with head address
{
    Node *newNode = new Node(val);

    if(head == NULL)
    {
        head = newNode;
        newNode->Next = head;
        return;
    }

    Node *temp = head;  //copy head in temp

    while(temp->Next != head)
    {
        temp = temp->Next;
    }
    newNode->Next = head;  //or newNode->Next = temp->Next

    temp->Next = newNode;

}

//Circular Linked List Part-1: 
void insertAtHeadcircular(Node* &head,int val)
{
    //step-1:NewNode Creation
    Node* newNood = new Node(val);   //parameter

    //Step-2:Update of newNode->Next
    newNood->Next = head;

    //Step-3:Update the tail with new head
    if(head == NULL)
    {
       head =newNood;
       newNood->Next = head;
    }
    Node* temp = head;
    while(temp->Next != head)
    {
        temp = temp->Next;
    }
    temp->Next = newNood;

    //Step-4:Update of head
    head = newNood;
}


//For circular Linked List we have to change also display function
void display(Node *head)  //Node type pointer
{
   Node* temp = head;
   if(head == NULL)
    {
       cout<<"The Linked List is Empty"<<endl;
       return;
    }

   do
    {
       cout<<temp->value;
       temp = temp->Next;
       if(temp != head)
       {
         cout<<"-->";
       }

    }while(temp != head);

cout<<endl;

}

//Change also countLength for circular:
int countLength(Node* &head)
{
    int count = 0;
    Node * temp = head;

   do
    {
        count++;
        temp = temp->Next;
    } while(temp != head);

    return count;

}

//insertionAtspecific position:
void insertionAtSpecificPosition(Node* &head,int pos,int val)
{
    int i=0;
    Node* temp = head;

    while(i<pos-2)
    {
        temp = temp->Next;
        i++;

    }

    //create New node
    Node *newNode = new Node(val);

    newNode->Next = temp->Next;
    temp->Next = newNode;
}


//deletion At head with circular LL:
void deletionAtHead(Node* &head)
{
    Node* temp = head;

    if(temp != NULL)
    {
     //Step-1:
       Node* delNode = temp;
       while (temp->Next != head)
       {
            temp = temp->Next;
       }
       //Step-2:

        temp->Next = delNode->Next;
        //Step-3:
        head = delNode->Next;
        //Step-4:
        delete delNode;
    }
    else
    {
        cout<<"There is no value in the Linked List"<<endl;
    }

}


//deletion At Tail with Circular:
void deletionAtTail(Node* &head)
{
    Node* temp = head;
    if(temp != NULL && temp->Next != head)
    {
        while(temp->Next->Next != head)
        {
            temp = temp->Next;
        }
        Node *delNode = temp->Next;
        temp->Next = delNode->Next;
        delete delNode;
    }
    else
    {
        //case:
        //head is Null
        if(temp == NULL)
            cout<<"There is No Value in the Linked List"<<endl;


        //head is Tail
        else
            deletionAtHead(head);
    }

}
void deletionAtSpecificPosition(Node* &head,int position)
{
    Node* temp = head;
    if(position<=countLength(head))
    {
        if(position == 1)
        {
            deletionAtHead(head);
        }
        else if(position == countLength(head))
        {
            deletionAtTail(head);
        }
        else
        {
            int i=1;
            while(i<position-1)
            {
                temp = temp->Next;
                i++;
            }
            Node* delNode = temp->Next;
            temp->Next = delNode->Next;
            delete delNode;

        }


    }
    else
    {

             cout<<"Position Out of Bound";

    }


}


int main()
{
    Node *head = NULL;

    //we can take input from user:

    int Value,Position;

    //Choice 1:Insertion at Head
    //Choice 2:Insertion at Tail
    cout<<"Choice 1:Insertion at Head with Circular"<<endl
        <<"Choice 2:Insertion at Tail with Circular"<<endl
        <<"Choice 3:Insertion at Specific Position"<<endl
        <<"Choice 4:Delete at Head Circular"<<endl
        <<"Choice 5:Delete at Tail Circular "<<endl
        <<"Choice 6:Delete at Specific Position"<<endl
        <<"Choice 0:Exit"<<endl
        <<endl;
    cout<<"Next Choice: ";
    int choice;
    cin>>choice;

    while(choice != 0)
    {
        //Instead of if/else we will use Switch
        switch(choice)
        {
        case 1:
            cout<<"Enter the Value: ";
            cin>>Value;
            insertAtHeadcircular(head,Value);
            break;
        case 2:
            cout<<"Enter the Value: ";
            cin>>Value;
            insertAtTailcircular(head,Value);
            break;
        case 3:
            cout<<"Enter the Desire Position: ";
            cin>>Position;
            cout<<"Enter the Value: ";
            cin>>Value;

            insertionAtSpecificPosition(head,Position,Value);
            break;

        case 4:
            deletionAtHead(head);
            break;

        case 5:
            deletionAtTail(head);
            break;;

        case 6:
            cout<<"Enter the Desire Position: ";
            cin>>Position;
            if(head == NULL)
            {
                cout<<"There is No Value in the Linked List"<<endl;
                break;

            }
            deletionAtSpecificPosition(head,Position);
            cout<<endl;
            display(head);
            break;


        default:
            break;

        }
        cout<<"Next Choice: ";
        cin>>choice;

    }

    cout<<endl<<"Linked List: ";
    display(head);
    cout<<"Length of the List: "<<countLength(head)<<endl;


    return 0;
}


