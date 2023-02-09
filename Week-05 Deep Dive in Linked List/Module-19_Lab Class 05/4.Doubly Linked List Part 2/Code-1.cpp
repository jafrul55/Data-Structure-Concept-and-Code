#include <bits/stdc++.h>
using namespace std;
class doublyNode
{
public:
    int Val;
    doublyNode *prev;
    doublyNode *Next;

    doublyNode(int val)
    {
        this->Val = val;
        prev = NULL;
        Next = NULL;
    }
};
// insert at tail:
void insertAtTail(doublyNode *&head, int val) // Here we will work with head address
{
    doublyNode *newNode = new doublyNode(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    doublyNode *temp = head; // copy head in temp

    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }

    temp->Next = newNode;
    newNode->prev = temp;
}

// Insert at Head:
void insertAtHead(doublyNode *&head, int val)
{
    // step-1:NewNode Creation
    doublyNode *newNood = new doublyNode(val); // parameter
    if(head == NULL)
    {
        head =newNood;
        return;
    }
    //step-2:Update of head->prev
    head->prev = newNood;
    // Step-3:Update of newNode->Next
    newNood->Next = head;

    // Step-4:Update of head
    head = newNood;
}

void display(doublyNode *n) // Node type pointer
{
    while (n != NULL)
    {
        cout << n->Val;
        if (n->Next != NULL)
            cout << " ---> ";
        n = n->Next; // To drive loop
    }
    cout << endl
         << endl;
}
//CountLength:
int countLength(doublyNode *&head)
{
    int count = 0;
    doublyNode *temp = head;
    while (temp != NULL)
    {
        count++;
        temp=temp->Next;
    }
    return count;

}

//Display Reverse:
void displayReverse(doublyNode * &head)
{
    doublyNode* temp = head;
    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }

    while (temp != NULL)   //back track again
   // 4->3->2->1
    {
        cout << temp->Val;
        if (temp->prev != NULL)
            cout << " ---> ";
        temp = temp->prev; // To drive loop
    }
    cout << endl
         << endl;
}
int main()
{
    doublyNode *head = NULL;

    // we can take input from user:

    int Value;

    // Choice 1:Insertion at Head
    // Choice 2:Insertion at Tail
    cout << "Choice 1:Insertion at Head" << endl
         << "Choice 2:Insertion at Tail" << endl
         << "Choice 3:Reverse print"<<endl
         << "Choice 0:Exit" << endl
         << endl;
    cout << "Next Choice: ";
    int choice;
    cin >> choice;

    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter the Value: ";
            cin >> Value;
            insertAtHead(head, Value);
            break;
        case 2:
            cout << "Enter the Value: ";
            cin >> Value;
            insertAtTail(head, Value);
            break;
        case 3:
            displayReverse(head);
            break;
        default:
            break;
        }
        cout << "Next Choice: ";
        cin >> choice;
    }

    cout << endl
         << "Doubly Linked List: ";
    display(head);


    cout<<"Length of the List: "<<countLength(head)<<endl;

    return 0;
}
