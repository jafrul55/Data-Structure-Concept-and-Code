#include<bits/stdc++.h>
using namespace std;

//namespace:
namespace one
{
    //you can use here variable name
    int x=10;
    void fun()
    {
        cout<<"I am namespace one"<<endl;
    }
}

namespace two
{
    int x=20;
    void fon()
    {
        cout<<"I am namespace two"<<endl;
    }
}

int main()
{
   cout<<one::x<<endl;

   cout<<two::x<<endl;

    return 0;
}


