#include<bits/stdc++.h>
using namespace std;
//Function Overriding
class Parent
{
public:
    void fun()
    {
        cout<<"Parent"<<endl;
    }

};
class Child:public Parent   //child class derive/inheritance of parent class
{
public:
    void fun()
    {
        cout<<"Child"<<endl;
        //Only child value will Print and parent value will overriding by child
    }

};

int main()
{
    Child obj;  //this is the object of child
    obj.fun();
//This process will work incase of run time

    return 0;
}


