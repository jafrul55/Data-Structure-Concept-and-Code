#include<bits/stdc++.h>
using namespace std;
//Iterator in c++
int main()
{
//To do iterator
string st = "abcdefghij"; //st is a object
string :: reverse_iterator it;  //we have to do reverse to iterator
 //Object which of a class will be iterate
//iterator name "it"

for(it=st.rbegin(); it!= st.rend();it++)  //reverse all value will print
//we can also use here rbegin() and rend()
//for that
{
  cout<<*it<<endl;
}
    return 0;
}


