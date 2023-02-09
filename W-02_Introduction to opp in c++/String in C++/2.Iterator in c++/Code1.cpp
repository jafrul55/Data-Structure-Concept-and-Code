#include<bits/stdc++.h>
using namespace std;
//Iterator in c++
int main()
{
//To do iterator
string st = "abcdefghij"; //st is a object
string :: iterator it;  //Object which of a class will be iterate
//iterator name "it"

for(it=st.begin(); it!= st.end();it++)
    //first to last value will iterate using for loop
{
  cout<<*it<<endl;
}
    return 0;
}

