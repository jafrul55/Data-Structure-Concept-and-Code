#include<bits/stdc++.h>
using namespace std;
//Improved Creation of Linear Linked List:
//we Learned how to input in tail
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
  Node *newNode = new Node(val); //keep the val in newNode

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
    char choice = 'Y';
    while(choice == 'Y')
    {
        cout<<"Enter the Value: ";
        cin>>n;
        insertAtTail(head,n);
        cout<<"Do you want to continue (Y/N): ";
        cin>>choice;
    }

      display(head);

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

    return 0;
}


