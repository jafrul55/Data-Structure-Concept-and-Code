#include<bits/stdc++.h>
using namespace std;
//Encapsulations in c++
//Encapsulation
class Student
{
public:
    int x;    //data
    void sayHi()  //function
    {
        cout<<"Hi "<<x<<endl;
    }
};
int main()
{
  Student sagor;  //object
  sagor.x=10;     //member of class
  sagor.sayHi();  //member of class


    return 0;
}
