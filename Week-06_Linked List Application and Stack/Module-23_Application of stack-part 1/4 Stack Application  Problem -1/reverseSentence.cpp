#include<bits/stdc++.h>
#include"MyStack3.h"
using namespace std;
//To reverse sentence
void reverseSentence(string chk)
{

Stack <string> st;
  for(int i=0;i<chk.length();i++)
  {
    string word = "";
    while(i<chk.length() && chk[i] != ' ')
    {
       word += chk[i];
       i++;
    }

     st.push(word);
  }

  while(!st.empty())
  {
   cout<<st.Top()<<" ";
   st.pop();
  }

}
int main()
{
   string s = "I am Jafrul";

   reverseSentence(s);

   return 0;
}
