#include<bits/stdc++.h>
using namespace std;
//Dynamic Allocation in c++
int main()
{
//we have one more function calloc to make everything zero(0)
int *p = (int*)calloc(10,sizeof(int));
for(int i=0;i<10;i++)
{
    cout<<p[i]<<endl;
}



    return 0;
}

