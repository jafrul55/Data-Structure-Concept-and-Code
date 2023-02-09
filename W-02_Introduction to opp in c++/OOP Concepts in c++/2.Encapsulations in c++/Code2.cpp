#include<bits/stdc++.h>
using namespace std;
//Encapsulations in c++
//Public --> all people can excess.
//Private-->Friend can excess all data.
//protected-->Child and Friend can excess all data but not other person.
class Student
{
public:
    int x;
private:    //private cannot excess
    int y;
protected:  //Protected cannot excess
    int z;
};
int main()
{
Student sagor;
sagor.x=10;
sagor.y=20;   //private cannot excess
sagor.z=30;  //Protected cannot excess

//here y and z cannot excess because of private and protected
cout<<sagor.x<<sagor.y<<sagor.z<<endl;

    return 0;
}
/*
excess modifire:
1.Public
2.Private-->Friend can excess all data.
3.protected-->Child and Friend can excess all data
but other person(relative) cannot excess.
*/
