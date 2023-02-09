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
    //child can print value of protected using by function
    void tellMe()
    {
        cout<<"Protected Value: "<<z<<endl;

    }

};

int main()
{
Parent pt(10,20,30);  //call constructor

Child ch(100,10,20,30);
 ch.tellMe(); //child can print protected value using function.
//And call to function ch.tellMe()



    return 0;
}

