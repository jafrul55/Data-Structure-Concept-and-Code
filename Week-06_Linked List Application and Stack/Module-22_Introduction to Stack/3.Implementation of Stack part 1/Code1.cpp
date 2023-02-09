#include <bits/stdc++.h>
using namespace std;
// Implementation of Stack part - 1
class Node {
 public:
  int value;
  Node* next;
  Node* prev;

  Node(int Val) {
    value = Val;
    next = NULL;
    prev = NULL;
  }
};

class stack {
  Node* head;
  Node* top;

 public:
  // PUSH Operation:
  void push(int val) {
    Node* newNode = new Node(val);

    if (head == NULL) {
      head = top = newNode;
      return;
    }

    top->next = newNode;
    newNode->prev = top;
    top = newNode;
  }

  // EMPTY
  // SIZE
  // TOP
};

int main() { 
    
    
    return 0;
}
