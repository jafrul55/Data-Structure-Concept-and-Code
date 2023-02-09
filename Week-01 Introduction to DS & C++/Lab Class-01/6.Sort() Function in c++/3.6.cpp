#include<bits/stdc++.h>
using namespace std;
//sort()Function in c++
//it is included with STL->Standard Template Library
int main()
{
int a[5]={5,4,3,2,1};
sort(a,a+2); //here 4 ,5 will sort only
for(int i=0;i<5;i++)
{
    cout<<a[i]<<" "; //4,5 will be sort
}


    return 0;
}
