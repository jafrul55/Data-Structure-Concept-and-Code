#include <bits/stdc++.h>
using namespace std;
// Find Mid point of A List[Slow-Fast Pointer]
class Node
{
public:
    int value;
    Node *Next; // Node type pointer

    // Construction Creation
    Node(int val)
    {
        value = val;
        Next = NULL;
    }
};

struct Test // we use here a structure
{
    int Position[1000];
};

void insertAtTail(Node *&head, int val);
void insertAtHead(Node *&head, int val);
void display(Node *n);
int countLength(Node *&head);
void insertionAtSpecificPosition(Node *&head, int pos, int val);
int searchByValueUnique(Node *&head, int val);
void searchByValueDuplicate(Node *&head, int val);
Test searchByValueDuplicateReturn(Node *&head, int key);
void searchByValueUnique(Node *&head, int searchValue, int Value);
void deletionAtHead(Node *&head);
void deletionAtTail(Node *&head);
void deletionAtSpecificPosition(Node *&head, int position);
void deletionByValueUnique(Node *&head, int Value);
Node* reverseNonRecursive(Node* &head);

void insertAtTail(Node *&head, int val) // Here we will work with head address
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head; // copy head in temp

    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }

    temp->Next = newNode;
}

void insertAtHead(Node *&head, int val)
{
    // step-1:NewNode Creation
    Node *newNood = new Node(val); // parameter

    // Step-2:Update of newNode->Next
    newNood->Next = head;

    // Step-3:Update of head
    head = newNood;
}

void display(Node *n) // Node type pointer
{
    while (n != NULL)
    {
        cout << n->value;
        if (n->Next != NULL)
            cout << " -> ";
        n = n->Next; // To drive loop
    }
    cout << endl
         << endl;
}

int countLength(Node *&head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->Next;
    }

    return count;
}
// insertionAtspecific position:
void insertionAtSpecificPosition(Node *&head, int pos, int val)
{
    int i = 0;
    Node *temp = head;

    while (i < pos - 2)
    {
        temp = temp->Next;
        i++;
    }

    // create New node
    Node *newNode = new Node(val);

    newNode->Next = temp->Next;
    temp->Next = newNode;
}

int searchByValueUnique(Node *&head, int key)
{

    Node *temp = head;
    // case1--> 1 2 3 4 5 6    9 (Last NULL)
    //  case 2--> (Firat NULL) -------9
    int count = 1;
    if (temp == NULL) // For case 1
    {
        return -1; // Not found the value
    }
    while (temp->value != key)
    {
        if (temp->Next == NULL) // For case 2
        {
            return -1; // Not found the value
        }

        temp = temp->Next;
        count++;
    }
    return count;
}

void searchByValueDuplicate(Node *&head, int key)
{
    Node *temp = head;

    // To store in the Array:
    int size;
    size = countLength(head);
    int position[size + 1], k = 1; // to traverse array|| in 0 position array size will store

    int count = 1;
    int flag = 0;
    while (temp != NULL)
    {
        if (temp->value == key)
        {
            //            cout<<count<<" ";
            position[k] = count;
            k++;

            flag = 1;
        }
        temp = temp->Next;
        count++;
    }
    cout << endl;
    if (flag == 0)
    {
        cout << "The Searched Value is not yet in the List" << endl;
    }
    else
    {
        position[0] = k;
        cout << "The value is found at position: ";
        for (int i = 1; i < position[0]; i++)
        {

            cout << position[i];
            if (i < position[0] - 1)
                cout << ",";
        }
        cout << endl;
    }
}

// SearchByValueDuplicateReturn:
Test searchByValueDuplicateReturn(Node *&head, int key)
// it will return Test type Value
{
    Node *temp = head;
    Test T;    // Test type T
    int k = 1; // to traverse array|| in 0 position array size will store

    int count = 1;
    while (temp != NULL)
    {
        if (temp->value == key)
        {
            T.Position[k] = count;
            k++;
        }
        temp = temp->Next;
        count++;
    }
    T.Position[0] = k;
    return T;
}
// Insertion after a specific value (Unique List):
void searchByValueUnique(Node *&head, int searchValue, int Value)
{
    // Step-1:Search the position of the searchValue
    int position;
    position = searchByValueUnique(head, searchValue);
    // Step 2:Insert the value at the position+1
    insertionAtSpecificPosition(head, position + 1, Value);
}

// deletion At head:
void deletionAtHead(Node *&head)
{
    Node *temp = head;
    // to protect underflow(if head become NULL/empty)
    if (temp != NULL)
    {
        head = temp->Next;
        delete temp;
    }
    else
    {
        cout << "There is no value in the Linked List" << endl;
    }
}

// deletion At Tail:
void deletionAtTail(Node *&head)
{
    Node *temp = head;
    if (temp != NULL && temp->Next != NULL)
    {
        while (temp->Next->Next != NULL)
        {
            temp = temp->Next;
        }
        Node *delNode = temp->Next;
        temp->Next = NULL;
        delete delNode;
    }
    else
    {
        // case:
        // head is Null
        if (temp == NULL)
            cout << "There is No Value in the Linked List" << endl;

        // head is Tail
        else
            deletionAtHead(head);
    }
}
void deletionAtSpecificPosition(Node *&head, int position)
{
    Node *temp = head;
    if (position <= countLength(head))
    {
        if (position == 1)
        {
            deletionAtHead(head);
        }
        else if (position == countLength(head))
        {
            deletionAtTail(head);
        }
        else
        {
            int i = 1;
            while (i < position - 1)
            {
                temp = temp->Next;
                i++;
            }
            Node *delNode = temp->Next;
            temp->Next = delNode->Next;
            delete delNode;
        }
    }
    else
    {

        cout << "Position Out of Bound";
    }
}

void deletionByValueUnique(Node *&head, int Value)
{
    // Find the position of the value
    int position;
    position = searchByValueUnique(head, Value);

    // Deletion the Node at that  position
    if (position == -1)
    {
        cout << "Value not Found in the Linked List" << endl;
    }
    else
    {
        deletionAtSpecificPosition(head, position);
    }
}
//Reverse NonRecursve:
Node *reverseNonRecursive(Node* &head)
{
    Node *prev = NULL;
    Node* current = head;
    Node* front;
    if(head == NULL)
    {
        cout<<"The Linked List is Empty "<<endl;
        return head;
    }
    else
    {
        front = head->Next;
    }

    while(true)  //NULL | Next = NULL
    {
    current->Next = prev;
    prev = current;
    current = front;
    if(current == NULL)
        break;
    front = front->Next;

    }
    return prev;

}
//Find Mid Point of A List [Slow-Fast Pointer]
int findMid(Node* &head)
{
    //Case-1:
    //if head become empty:
    if(head == NULL)
    {
        return -1;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->Next != NULL)
    {
        slow = slow->Next;
        fast = fast->Next->Next;
    }
    return slow->value;

}


int main()
{
    Node *head = NULL;

    // we can take input from user:

    int Value, Position;

    // Choice 1:Insertion at Head
    // Choice 2:Insertion at Tail
    cout << "Choice 1:Insertion at Head" << endl
         << "Choice 2:Insertion at Tail" << endl
         << "Choice 3:Insertion at Specific Position" << endl
         << "Choice 4:Search a value(Unique List)" << endl
         << "Choice 5:Search a value (Duplication enabled List)" << endl
         << "Choice 6:Insertion after a specific value (Unique List)" << endl
         << "Choice 7:Delete at Head" << endl
         << "Choice 8:Delete at Tail" << endl
         << "Choice 9:Delete at Specific Position" << endl
         << "Choice 10:Deletion by Value (Unique List)" << endl
         << "Choice 11:Reversal of List Non-Recursive"<<endl
         << "Choice 12:Finding the Mid(Slow-Fast Pointer Method)"<<endl
         << "Choice 0:Exit" << endl
         << endl;
    cout << "Next Choice: ";
    int choice;
    cin >> choice;

    while (choice != 0)
    {
        // Instead of if/else we will use Switch
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
            cout << "Enter the Desire Position: ";
            cin >> Position;
            cout << "Enter the Value: ";
            cin >> Value;

            insertionAtSpecificPosition(head, Position, Value);
            break;

        case 4:
            cout << "Enter the value to Search: ";
            cin >> Value;
            Position = searchByValueUnique(head, Value);
            if (Position != -1)
            {
                cout << "The number is at Position: " << Position << endl;
            }
            else
            {
                cout << "The number is not yet in the List" << endl;
            }
            break;

        case 5:
            cout << "Enter the value to Search: ";
            cin >> Value;
            Test T;
            T = searchByValueDuplicateReturn(head, Value);
            if (T.Position[0] == 1)
            {
                cout << "The search Value is not yet in the List" << endl;
            }
            else
            {
                int size = T.Position[0];
                cout << "The value is found at position: ";
                for (int i = 1; i < size; i++)
                {
                    cout << T.Position[i];
                    if (i < size - 1)
                        cout << ", ";
                }
                cout << endl;
            }
        case 6:
            cout << "Enter the Value to search: ";
            int searchValue;
            cin >> searchValue;
            cout << "Enter the value to insert: ";
            cin >> Value;
            searchByValueUnique(head, searchValue, Value);
            break;

        case 7:
            deletionAtHead(head);
            break;

        case 8:
            deletionAtTail(head);
            break;

        case 9:
            cout << "Enter the Desire Position: ";
            cin >> Position;
            if (head == NULL)
            {
                cout << "There is No Value in the Linked List" << endl;
                break;
            }
            deletionAtSpecificPosition(head, Position);
            cout << endl;
            display(head);
            break;
        case 10:
            cout << "Enter the Value to Delete: ";
            int delvalue;
            cin >> delvalue;
            deletionByValueUnique(head, delvalue);
            break;
         case 11:
             head = reverseNonRecursive(head);
             break;
        case 12:
            int mid;
            mid = findMid(head);
            if(mid == -1)
            {
                cout<<"The Linked List is Empty"<<endl;
            }
            else
            {
               cout<<"Mid Value is "<< mid<<endl;
            }
            break;


        default:
            break;
        }
        cout << "Next Choice: ";
        cin >> choice;
    }

    cout << endl
         << "Linked List: ";
    display(head);
    cout << "Length of the List: " << countLength(head) << endl;

    return 0;
}

