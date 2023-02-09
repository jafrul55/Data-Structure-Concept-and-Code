#include<bits/stdc++.h>
#include"MyStack3.h"
using namespace std;

void insertAtBottom(Stack<int>&chk,int chkElement)
{
    if(chk.empty())  //base case
    {
      chk.push(chkElement);
      return;
    }

    int topElement = chk.Top();
    chk.pop();
    insertAtBottom(chk,chkElement);  // recursion

    chk.push(topElement);
    
//     int topElement 
}
void reverseStack(Stack<int> &chk)  //call by referrence
{
   if(chk.empty())
   {
     return;
   }
   int topElement = chk.Top();
   chk.pop();
   reverseStack(chk);  //recursion
   //magic function:
   insertAtBottom(chk,topElement);
}

int main()
{

  Stack<int>st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  st.push(5);

//to reverse value
 reverseStack(st);

while(!st.empty())
{
  cout<<st.pop()<<endl;
}

  return 0;
  
  }