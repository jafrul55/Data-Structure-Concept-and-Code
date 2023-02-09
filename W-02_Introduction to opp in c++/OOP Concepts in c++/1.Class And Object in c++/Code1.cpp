#include<bits/stdc++.h>
using namespace std;
//Class and Object in c++
class Student
{
public:
    char name[100];
    int roll;
};
int main()
{
    Student sagor;
    strcpy(sagor.name,"Jafrul Alam Tusar");
    sagor.roll=56;
    cout<<sagor.name<<" "<<sagor.roll<<endl;

    return 0;
}
