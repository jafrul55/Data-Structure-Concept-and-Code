#include<bits/stdc++.h>
using namespace std;
//Operator Overloading and Function Overriding.
// If you want to do jog
//Operator Overloading
class Example
{
public:
    int x;
    Example(int a)
    {
        x=a;
    }
    Example operator +(Example obj)
    {
        cout<<obj.x<<endl;  //Here only b object will call.
    }
};
int main()
{
  Example a(10),b(20);

   a+b;


 return 0;
}
/*
Operator overloading= akta operator diya different kaz korbo






*/
