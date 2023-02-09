#include<bits/stdc++.h>
using namespace std;
int main()
{
//Prefix Sum Array:->cromo jogito gono songka
int ar[5] = {10,8,1,2,5};
int pre[5];

pre[0] = ar[0];  //array first index value we will keep in pre first index

for(int i=1;i<5;i++)
{
    pre[i]=ar[i]+pre[i-1];
}

for(int i=0;i<5;i++)
{
    cout<<pre[i]<<" ";
}






return 0;
}
