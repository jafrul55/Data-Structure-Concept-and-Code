#include<bits/stdc++.h>
using namespace std;
//String Operations in c++
int main()
{
string st="aaaabbbaaazz";
//if we want to print sub-string of any string
// then just cut full
string sub=st.substr(4,4);   //(Four number index,how many character want to cut)
//we can keep sub-string in other string and print it
cout<<sub<<endl;
return 0;
}


