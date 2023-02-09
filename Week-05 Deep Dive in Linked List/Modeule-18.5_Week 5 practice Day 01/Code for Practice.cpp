#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node* Next;

    Node(int Val)
    {
        value = Val;
        Next = NULL;
    }
};
//1.Counting The Size;
int CountingtheSize(Node* &head)
{
    int count = 0;
    Node* temp = head;
    while(temp != NULL)
    {
        count++;
        temp = temp->Next;
    }
    return count;

}

//2.DisplayList:
void DisplayList(Node* n)
{
    while(n!=NULL)
    {
        cout<<n->value;
        if(n->Next != NULL)
        {
            cout<<"->";
        }
        n=n->Next;
    }
}

//3.Insert at head:

void InsertionatHead(Node* &head,int Val)
{
    Node* NewNode = new Node(Val);
    NewNode->Next = head;
    head = NewNode;


}
//4.Insert at Tail:

void InsertionatTail(Node* &head,int Val)
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
//5.Insertion at Specific Position:
void insertionatSpecificPosition(Node* &head,int Position,int Val)
{
    int i=0;
    Node* temp = head;
    while(i<Position-2)
    {
        temp = temp->Next;
        i++;
    }
    Node *newNode = new Node(Val);
    newNode->Next = temp->Next;
    temp->Next = newNode;


}

//6.Search a value(Unique List):
int SearchavalueUnique(Node* &head,int Val)
{
    Node* temp = head;
    int count = 1;
    if(temp == NULL)
    {
        return -1;

    }
    while(temp->value != Val)
    {
        if(temp->Next == NULL)
        {
            return -1;
        }
        temp = temp->Next;
        count++;
    }
    return count;

}
//7.Search a  value(Duplicate enable List):
void SearchavalueDuplicate(Node* &head,int Val)
{
    Node* temp = head;
    int size;
    size = CountingtheSize(head);
    int Position[size+1],k=1;
    int count =1;
    int flag = 0;
    while(temp != NULL)
    {
        if(temp->value == Val)
        {
            Position[k] = count;
            k++;
            flag = 1;

        }
        temp=temp->Next;
        count++;

    }
    cout<<endl;
    if(flag = 0)
    {
        cout<<"The search value is not yet in the List"<<endl;
    }
    else
    {
        Position[0] = k;
        cout<<"The value is found at position: ";
        for(int i=1; i<Position[0]; i++)
        {
            cout<<Position[i];
            if(i<Position[0]-1)
            {
                cout<<",";
            }
        }
        cout<<endl;

    }
}

//8.Insertion after a specific value(Unique List):
void insertion_after_a_specific_valueUnique(Node* &head,int searchVal,int Val)
{
    int Position;
    Position = SearchavalueUnique(head,searchVal);
    insertionatSpecificPosition(head,Position+1,Val);

}

//9.Insertion after a specific value(Duplication enabled List)
void insertion_after_a_specific_valueDuplicate(Node* &head,int searchVal,int Val)
{
    int position;
    position = SearchavalueDuplicate(head,searchVal);
    insertion_after_a_specific_valueUnique(head,position+1,Val);

}

void deletionAtHead(Node* &head)
{
    Node*temp = head;
    if(temp != NULL)
    {
        head = temp->Next;
        delete temp;
    }
    else
    {
        cout<<"There is no value in the Linked List"<<endl;
    }
}

void deletionAtTail(Node* &head)
{
    Node* temp = head;
    if(temp != NULL && temp->Next != NULL)
    {
        while(temp->Next->Next != NULL)
        {
            temp = temp->Next;
        }
        Node * delNode = temp->Next;
        temp->Next = NULL;
        delete delNode;
    }
    else
    {
        if(temp == NULL)
        {
            cout<<"There is no value in the Linked List"<<endl;
        }
        else
        {
            deletionAtHead(head);
        }
    }

}

void deletionAtSpecificPosition(Node* &head,int position)
{
    Node* temp = head;
    if(position <= CountingtheSize(head))
    {
        if(position == 1)
        {
            deletionAtHead(head);
        }
        else if(position == CountingtheSize(head))
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
        }
        Node* delNode = temp->Next;
        temp->Next = delNode->Next;
        delete delNode;

    }
    else
    {
        cout<<"Position out of Bound";
    }
}

void deletiionByValueUnique(Node* &head,int Value)
{
    int position;
    position = SearchavalueUnique(head,Value);
    if(position == -1)
    {
        cout<<"Value is not Found in the Linked List"<<endl;
    }
    else
    {
        deletionAtSpecificPosition(head,position);
    }
}

int main()
{
    Node *head = NULL;

    int Value,Position;
//display List:
    cout<<"Choice 1:Insert at Head"<<endl
        <<"Choice 2:Insert at Tail"<<endl
        <<"Choice 3:Insert At Specific Position: "<<endl
        <<"Choice 4:Search a value(Unique List)"<<endl
        <<"Choice 5:Search a value (Duplicate)"<<endl
        <<"Choice 6:Insertion after a specific value(Unique List)"<<endl
//        <<"Choice 7:Insertion after a specific value(Duplicate List)"<<endl
        <<"Choice 8:Deletion At head"<<endl
        <<"Choice 9:Deletion At Tail"<<endl
        <<"Choice 10:Deletion At Specific Position"<<endl
        <<"Choice 11:Deletion by Value(Unique List)"<<endl
        <<"Choice 0:Exit"<<endl
        <<endl;
    cout<<"Next Choice: ";
    int choice;
    cin>>choice;

    while(choice != 0)
    {
        switch(choice)
        {
        case 1:
            cout<<"Enter the value: ";
            cin>>Value;
            InsertionatHead(head,Value);
            break;
        case 2:
            cout<<"Enter the value: ";
            cin>>Value;
            InsertionatTail(head,Value);
            break;
        case 3:
            cout<<"Enter the Desire Position: ";
            cin>>Position;
            cout<<"Enter the Value: ";
            cin>>Value;
            insertionatSpecificPosition(head,Position,Value);
            break;
        case 4:
            cout<<"Enter the value to Search: ";
            cin>>Value;
            Position = SearchavalueUnique(head,Value);
            if(Position != -1)
            {
                cout<<"The number is at position: "<<Position<<endl;
            }
            else
            {
                cout<<"The number is not yet in the List"<<endl;
            }
            break;
        case 5:
            cout<<"Enter the value to Search: ";
            cin>>Value;
            SearchavalueDuplicate(head,Value);
            break;
        case 6:
            cout<<"Enter the value to search: ";
            int searchVal;
            cin>>searchVal;
            cout<<"Enter the value to insert: ";
            cin>>Value;
            insertion_after_a_specific_valueUnique(head,searchVal,Value);
            break;
        case 7:
            cout<<"Enter the value to search: ";
            int searchVal;
            cin>>searchVal;
            cout<<"Enter the value to insert: ";
            cin>>Value;
            insertion_after_a_specific_valueDuplicate(head,searchVal,Value);
            break;
        case 8:
            deletionAtHead(head);
            break;
        case 9:
            deletionAtTail(head);
            break;
        case 10:
            cout<<"Enter the Desire Position: ";
            cin>>Position;
            if(head == NULL)
            {
                cout<<"There is no Value in the Linked List"<<endl;
                break;
            }
            deletionAtSpecificPosition(head,Position);
            cout<<endl;
            DisplayList(head);
            break;
        case 11:
            cout<<"Enter the Value to Delete: ";
            int delvalue;
            cin>>delvalue;
            deletiionByValueUnique(head,delvalue);


        default:
            break;

        }
        cout<<"Next Choice: ";
        cin>>choice;
    }
    cout<<endl<<"Linked List: ";
    DisplayList(head);
    cout<<endl;
    cout<<"Length of the List: "<<CountingtheSize(head)<<endl;


    return 0;
}

