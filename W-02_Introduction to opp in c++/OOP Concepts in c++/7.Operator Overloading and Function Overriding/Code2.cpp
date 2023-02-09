#include<bits/stdc++.h>
using namespace std;

class Example
{
public:
    int x;
    Example(int a) //here object a
    {
        x=a;
    }
    Example operator +(Example obj) //here obj.x is b
    {
        cout<<x<<" "<<obj.x<<endl;  //Here a and b available
    }
};

int main()
{
    Example a(10),b(20);
    a+b;
    return 0;
}
