#include<bits/stdc++.h>
using namespace std;
//Encapsulations in c++
//without hassel we can use constructor.
class Example
{
public:

    int x;
    int y;
    int z;
    Example(int a,int b,int c)  //constructor name and class name will be same
    {
        x=a;
        y=b;
        z=c;
    }
};
int main()
{
    Example a(10,20,30); //Object and parameter call to constructor available.
    cout<<a.x<<" "<<a.y<<" "<<a.z<<endl;

    return 0;
}

