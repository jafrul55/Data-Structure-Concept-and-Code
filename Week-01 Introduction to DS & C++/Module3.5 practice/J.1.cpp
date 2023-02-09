#include<bits/stdc++.h>
using namespace std;
int main()
{
    char O[51],E[51];
    cin>>O>>E;
    for(int i=0;i<strlen(O)||i<strlen(E);i++)
    {
        if(i<strlen(O))
        {
            cout<<O[i];
        }
        if(i<strlen(E))
        {
            cout<<E[i];
        }
    }
}
