#include<bits/stdc++.h>
using namespace std;
int main()
{
     double a = 10.345245;  //it's not print full value after point
     //for print number as our own size
     cout<<fixed<<setprecision(2)<<a<<endl;

     cout<<fixed<<setprecision(4)<<a<<endl;
     cout<<fixed<<setprecision(6)<<a<<endl;

     return 0;
}


