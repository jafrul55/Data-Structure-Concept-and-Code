#include<bits/stdc++.h>
using namespace std;
//Iterator in c++
int main()
{
//To do iterator
string st = "abcdefghij"; //st is a object

//if we write here auto in for loop then it can automatically
//understand what type of iterator it is.
for(auto it=st.rbegin(); it!= st.rend();it++)  //Auto
// auto will understand this is a reverse iterator
  cout<<*it<<endl;

    return 0;
}



