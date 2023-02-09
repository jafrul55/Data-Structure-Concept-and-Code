#include<bits/stdc++.h>
using namespace std;
//Ask to see the money
class Parent
{
private:
    int taka;
public:
    Parent(int tk)   //constructor
    {
        taka=tk;
    }
    friend class AbburBondhu; //we write here friend class to print taka
};
class AbburBondhu
{
public:
    void tellSecret(Parent *ptr)
    {
        cout<<ptr->taka<<endl;
    }
};
int main()
{

    Parent pt(1500);
    AbburBondhu bondhu;
    bondhu.tellSecret(&pt);

    return 0;
}
