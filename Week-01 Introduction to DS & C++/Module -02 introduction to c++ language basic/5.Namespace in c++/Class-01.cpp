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
    void fun()
    {
        cout<<"I am namespace two"<<endl;
    }
}

int main()
{
    one::fun();

    two::fun();

    return 0;
}
