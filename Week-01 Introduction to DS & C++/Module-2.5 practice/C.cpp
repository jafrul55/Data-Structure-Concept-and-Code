#include<bits/stdc++.h>
using namespace std;
int main()
{
int A,B;
char op;
cin>>A>>op>>B;
if(op=='+')
{
    int Sum = A+B;
    cout<<Sum<<endl;
}
else
{
    int Minus = A-B;
     cout<<Minus<<endl;
}

    return 0;
}
