#include <bits/stdc++.h>

#include "MYSTACK.h"
#include "MyQueue.h"
using namespace std;

void reverseKelements(int n, int k, Queue <int> &q) {
  int x = n / k;
  int y = n % k;

  Stack<int> st;
  while (x > 0) {
    int chk = k;
    while (chk > 0) {
      st.push(q.Pop());
      chk--;
    }
    while (!st.empty()) {
      q.Push(st.pop());
    }
    x--;
  }

  while (y > 0) {
    st.push(q.Pop());
    y--;
  }
  while (!st.empty()) {
    q.Push(st.pop());
  }
}

int main() {
  int n, k;
  cin >> n >> k;
  Queue<int> q;
  for (int i = 0; i < n; i++) {
    int val;
    cin >> val;
    q.Push(val);
  }

  reverseKelements(n, k, q);

  while (!q.empty()) {
    cout << q.Pop() << " ";
  }
  cout << endl << endl;
  return 0;
}