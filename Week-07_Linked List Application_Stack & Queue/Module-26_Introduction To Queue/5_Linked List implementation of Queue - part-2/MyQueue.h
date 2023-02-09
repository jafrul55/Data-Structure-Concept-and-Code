#include <bits/stdc++.h>
using namespace std;

class Node
{
  public:
   int Value;
   Node *Next;

   Node(int Val)
   {
      Value = Val;
      Next = NULL;
   }
};

class Queue
{
  Node* Front;
  Node* Rear;

  public:
  Queue()  //constructure
  {
    Front = NULL;
    Rear = NULL;
  }

  //Enqueue Operation /Push():

  void Push(int Val)
  {
     Node* newNode = new Node(Val);
     
     if(Front == NULL)
     {
        Front = newNode;
        Rear  = newNode;
        return;
     }

     Rear->Next = newNode;
     Rear = Rear->Next;
  }

  //Dequeue Operation /Pop():
int Pop()
{
  int chk = -1;
  if(Rear == NULL)
  {
    cout<<"Queue Underflow| There is no element in the Queue"<<endl;
    return chk;
  }
  Node* delNode;
  delNode = Front;
  Front = Front->Next;
  if(Front == NULL)
  { 
    Rear = NULL;
  }
  chk = delNode->Value;
  delete delNode;
  return chk;

}


  //Peek Operation /front(),back():
  int front()
  {
    int chk;
    chk = Front->Value;

    return chk;
  }

  int back()
  {
     int chk;
     chk = Rear->Value;
     return chk;
  }

  //empty Operation:
  bool empty()
  {
     if(Front == NULL && Rear == NULL)
        return true;

     else
        return false;
  }


};