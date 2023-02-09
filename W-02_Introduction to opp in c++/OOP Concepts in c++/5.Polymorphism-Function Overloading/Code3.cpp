#include<bits/stdc++.h>
using namespace std;
//Polymorphism-function overloading
class Example
{
public:
    int add(int x,int y)  //sum of function int type
    {
        cout<<"First one"<<endl;
        return x+y;
    }
    double add(double x,double y)  //sum of function floating type
    {
        cout<<"Second one"<<endl;
        return x+y;
    }
    // we can call to character
    void add(char a)
    {
        cout<<"Hi "<<a<<endl;
    }
};
int main()
{
    Example ex;
   ex.add('z');
   //this is call function over loading


    return 0;
}
/*
1.int value will call to int sum

2.Floting value will call to floating sum
3.Remember 1 int and 1 float not possible


*/


