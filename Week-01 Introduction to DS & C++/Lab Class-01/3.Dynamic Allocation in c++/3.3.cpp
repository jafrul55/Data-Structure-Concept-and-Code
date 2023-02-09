#include<bits/stdc++.h>
using namespace std;
//Dynamic Allocation in c++
int main()
{
//dynamic Allocation incase of c
int *p = (int*)malloc(10*sizeof(int));
for(int i=0;i<10;i++)
{
    cout<<p[i]<<endl;
}



    return 0;
}
