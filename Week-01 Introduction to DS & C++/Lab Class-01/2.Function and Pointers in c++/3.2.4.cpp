#include<bits/stdc++.h>
using namespace std;
//Function and Pointers in c++
//using function
//using pointer
void print(int **x) //dereference
{
    **x = 2500; //dereference
}
int main()
{
int a=10;
int *p=&a;
int **q=&p;

print(q);
//call to int **x as pass by value and print x value
cout<<a<<endl;

    return 0;
}

