include<bits/stdc++.h>
using namespace std;
//if you want to see answer in main function()
//Operator overloding
//we can find it using 'int type'
class Example
{
public:
    int x;
    Example(int a) //here object a
    {
        x=a;
    }
    //we can use int type operator
    int operator +(Example obj) //here obj.x is-->b
    {
      return x+obj.x;

    }
};

int main()
{
    //Answer will show here for jogfol
    Example a(10),b(20),c(30);
      int  ans = a+b;  //first jogfol

    Example ansobj(ans); //we make object to ans
    cout<<ansobj+c<<endl;
    return 0;
}


