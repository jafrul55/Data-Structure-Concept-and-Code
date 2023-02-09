#include<bits/stdc++.h>
using namespace std;

int main()
{
    //stream is a group
    string s = "ab ab cd cd xy xy";
    //we will use stream to print s big space and seperately.
    //we can also print stream without constructor
    stringstream stream;
    stream<<s;

    string w;
    while(stream>>w)
    {
        cout<<w<<endl;
    }
}

