#include<bits/stdc++.h>
using namespace std;
//Iterator in c++
int main()
{
//To do iterator
string st = "abcdefghij";
//we can do iterate in different way to make reverse string:
for(string:: reverse_iterator it=st.rbegin(); it!=st.rend();it++)
{
    cout<<*it<<endl;
}
    return 0;
}


