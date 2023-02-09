#include<bits/stdc++.h>
using namespace std;
//Inheritance in c++

class Parent
{
public:
    int x;
private:
    int y;
protected:
    int z;
public:
    Parent(int a,int b,int c) //constructor
    {
         x=a;
         y=b;
         z=c;
    }

};
class Child:public Parent
{
public:
    int xx;
    Child(int aa,int a,int b,int c): Parent(a,b,c)  //constructor of child
    {
        xx=aa;
    }
    void tellMe()
    {        cout<<"Private Value: "<<y<<endl; //not possible
    }

};

int main()
{
Parent pt(10,20,30);  //call constructor

Child ch(100,10,20,30);
  ch.tellMe();  //child ch.x of parent can inheritance



    return 0;
}
/*
1.Public value can print from main and function
2.protected value can only print from function
3.But private value can not print in main or function





*/

