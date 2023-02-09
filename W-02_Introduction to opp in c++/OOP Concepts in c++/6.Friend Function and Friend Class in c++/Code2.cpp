#include<bits/stdc++.h>
using namespace std;
class Parent
{
private:
    int taka;
protected:
    int password;
public:
    Parent(int tk,int ps)   //constructor
    {
        taka=tk;
        password = ps;
    }
    friend class AbburBondhu;  //without friend class it won't work
};
class AbburBondhu
{
public:
    void tellSecret(Parent *ptr)
    {
        cout<<ptr->password<<endl;
    }
};
int main()
{

    Parent pt(1500,2345); //password
    AbburBondhu bondhu;
    bondhu.tellSecret(&pt);

    return 0;
}

