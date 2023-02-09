#include<bits/stdc++.h>
using namespace std;
//if you want to see answer in main function()
//Operator overloding
class Example
{
public:
    int x;
    Example(int a) //here object a  
     {
        x=a;
     }
     
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
    Example a(10),b(20),c(30);
    Example ans = a+b;
    //you can add one more to find jogfol
    Example ans2 = ans + c;
    cout<<ans2.x<<endl;
    return 0;
}

