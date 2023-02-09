#include<bits/stdc++.h>
#include "MyQueue.h"
using namespace std;
//first define the type:

// typedef pair <int,int> mytype;
//you can use here char:
typedef pair <char,int> mytype;
int main()
{
//   Queue <int> q;

//You can use it for pair type:
   Queue <mytype> q;

  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
//      int c1,c2;
     char c1;
     int c2;
     cin>>c1>>c2;
     q.Push(make_pair(c1,c2));

  }

//   while(!q.empty())
//   {
//     mytype chk;
//     chk = q.Pop();
//      cout<<chk.first<<" | "<<chk.second<<endl;
//   }
  cout<<endl<<endl;

  if(!q.empty())
  {
     mytype chk;
    chk = q.front();
     cout<<chk.first<<" | "<<chk.second<<endl;
  
  }

  if(!q.empty())
  {
     mytype chk;
     chk = q.back();
     cout<<chk.first<<" | "<<chk.second<<endl;
  
  }

  return 0;
}