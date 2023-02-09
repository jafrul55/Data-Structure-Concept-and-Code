#include<bits/stdc++.h>
using namespace std;
//if you want to see answer in main function()
//operator overloding
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
        //if you want to see answer in main function()
        Example ans(0);  //here just use a constructor uselessly
        ans.x=x+obj.x;
        return ans;

    }
};

int main()
{
    //Answer will show here for jogfol
    Example a(10),b(20);
    Example ans = a+b;
    cout<<ans.x<<endl;
    return 0;
}

