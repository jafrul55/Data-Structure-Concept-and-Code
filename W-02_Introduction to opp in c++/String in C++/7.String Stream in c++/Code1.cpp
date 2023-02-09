#include<bits/stdc++.h>
using namespace std;
//String Stream in c++
int main()
{
    //stream is a group
    string s= "ab ab cd cd xy xy";
    //we will use stream to print s big space and seperate
    stringstream stream(s);  //constructor

    string w;
    while(stream>>w)
    {
        cout<<w<<endl;
    }
}
