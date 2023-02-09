#include<bits/stdc++.h>
using namespace std;
//Function and Pointers in c++
//using function
//using also pointer
void print(int *x)
{
    *x=2500;  //this is a dereference
}
int main()
{

int a=10;
int *ptr = &a;
print(ptr);  //we will call to x as pointer
//call to int *x as pass by value and print x value
//we use pointer to change value of a

cout<<a<<endl;


    return 0;
}

