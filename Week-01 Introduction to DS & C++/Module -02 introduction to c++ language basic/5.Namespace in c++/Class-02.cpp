#include<bits/stdc++.h>
using namespace std;

//namespace:
namespace one
{
    void fun()
    {
        cout<<"I am namespace one"<<endl;
    }
}

namespace two
{
    void fon()
    {
        cout<<"I am namespace two"<<endl;
    }
}
using namespace one;  //we using here namespace one

using namespace two;
int main()
{
    fun();

    fon();

    return 0;
}

