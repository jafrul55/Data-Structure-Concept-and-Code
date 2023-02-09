#include <bits/stdc++.h>

using namespace std;

class Node {
 public:
  int Value;
  Node* Next;

  Node(int Val) {
    Value = Val;
    Next = NULL;
  }
};

class Queue {
  Node* Front;
  Node* Rear;

 public:
  Queue()  // constructure
  {
    Front = NULL;
    Rear = NULL;
  }

  // Enqueue Operation /Push():

  void Push(int Val) {
    Node* newNode = new Node(Val);

    if (Front == NULL) {
      Front = newNode;
      Rear = newNode;
      return;
    }

    Rear->Next = newNode;
    Rear = Rear->Next;
  }

  // Dequeue Operation /Pop():
  int Pop() {
    if (Front == NULL) {
      cout << "Underflow" << endl;
    }
    Node* delNode;
    delNode = Front;
    Front = Front->Next;
    delete delNode;

    if (Front == Rear) {
      Front = Front->Next;
      Rear = NULL;
    }
  }

  // Peek Operation /front(),back():

  // empty Operation:
};

int main() { return 0; }