#include <bits/stdc++.h>
using namespace std;
//Generic implementation of Queue
template <typename N> class NodeQ
{
  public:
   N Value;
   NodeQ *Next;

   NodeQ(N Val)
   {
      Value = Val;
      Next = NULL;
   }
};

template <typename Q> class Queue
{
  NodeQ <Q> *Front;
  NodeQ <Q> *Rear;

  public:
  Queue()  //constructure
  {
    Front = NULL;
    Rear = NULL;
  }

  //Enqueue Operation /Push():

  void Push(Q Val)
  {
     NodeQ <Q> *newNode = new NodeQ <Q> (Val);
     
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
Q Pop()
{
  Q chk;
  if(Rear == NULL)
  {
    cout<<"Queue Underflow| There is no element in the Queue"<<endl;
    return chk;
  }
  NodeQ <Q> *delNode;
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
  Q front()
  {
    Q chk;
    chk = Front->Value;
    return chk;
  }

  Q back()
  {
     Q chk;
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