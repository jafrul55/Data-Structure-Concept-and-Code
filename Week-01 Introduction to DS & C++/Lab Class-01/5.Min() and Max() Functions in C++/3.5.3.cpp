#include<bits/stdc++.h>
using namespace std;
//min() and max() Functions in c++
//using function you can find max or min number
int max(int a,int b)
{
    if(a>b) return a;
    else return b;
}
int main()
{
//miximum value assign in variable
int a=10,b=20;
int mx;
mx=max(a,b);

cout<<mx<<endl;

    return 0;
}


