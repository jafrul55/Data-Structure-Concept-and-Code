#include<bits/stdc++.h>
#include"MyQueue.h"
using namespace std;
//This is the implementation of int Type:
int main()
{
  Queue q;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int chk;
    cin>>chk;
    q.Push(chk);
  }

//   while(!q.empty())
//   {
//     cout<<q.Pop()<<" ";
//   }

  if(!q.empty())
  {
      cout<<q.front()<<endl;
  }
  if(!q.empty())
  {
    cout<<q.back()<<endl;
  }

  return 0;
}