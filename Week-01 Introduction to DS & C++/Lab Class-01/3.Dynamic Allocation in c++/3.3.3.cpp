#include<bits/stdc++.h>
using namespace std;
//Dynamic Allocation in c++
int main()
{
//this is include with c
int *p = (int*)calloc(10,sizeof(int));
for(int i=0;i<10;i++)
{
    cout<<p[i]<<endl;
}
//it will do free heap all value
free(p);

    return 0;
}

