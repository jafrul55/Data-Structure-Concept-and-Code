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

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
}


void retainM_DelN(Node* &head,int M,int N)
{
  Node* temp = head;
  Node* temp2 = NULL;
  int i=1;
  while(temp)
  {
      while(i<M)
      {
          temp = temp->Next;
          i++;
      }
    for(int j=1;j<=N;j++)
    {
        temp2 = temp->Next;
        temp->Next = temp2->Next;
        free(temp2);
    }
    i = 0;
      if(temp->Next == NULL)
        return;

  }

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
        temp = temp->Next;
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
int M,N;
cout<<"M = ";
cin>>M;
cout<<"N = ";
cin>>N;

retainM_DelN(head,M,N);
display(head);


    return 0;
}
