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
        temp=temp->Next;
    }
    temp->Next = newNode;

}

void Mstay_Ndel(Node* &head,int M,int N)
{
    Node* temp = head;
    Node* curr;
    while(temp != NULL)
    {
        int i = 1;
        for(i=1;i<M && temp != NULL;i++)
        {
            temp = temp->Next;
        }

        if(temp == NULL)
            return;
        int j = 1;
        curr = temp->Next;
        for(j=1;j<=N && curr != NULL;j++)
        {
            Node* delNode;
            delNode = curr;
            curr = delNode->Next;
            delete delNode;
        }

        temp->Next = curr;
        temp = curr;
    }
}

void display(Node* n)
{
    while(n != NULL)
    {
        cout<<n->Value;
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
    Node* head = NULL;
    int n,M,N;
    cin>>n>>M>>N;
    int array[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
        insertAtTail(head,array[i]);

    }


    Mstay_Ndel(head,M,N);
    display(head);

    return 0;
}

