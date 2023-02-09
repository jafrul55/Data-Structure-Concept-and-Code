#include<bits/stdc++.h>
using namespace std;
int main()
{
int X,t;
cin>>X>>t;
if(X>t)
{
    int sub = X-t;
    cout<<sub<<endl;
}
else if(t>X)
{
    cout<<"0"<<endl;
}
else if(X==t)
{
    cout<<"0"<<endl;
}


    return 0;
}

