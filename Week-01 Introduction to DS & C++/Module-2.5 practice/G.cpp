#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Rectangle:
    //A = wl
    //l = length
    //w = width
    int A,B,C,D;
    cin>>A>>B>>C>>D;
    int rec1 = A*B;
    int rec2 = C*D;
    if(rec1>rec2)
        cout<<rec1<<endl;
    else if(rec2>rec1)
        cout<<rec2<<endl;
    else
        cout<<rec1<<endl;

}
