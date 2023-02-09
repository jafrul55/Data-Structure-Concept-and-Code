#include<bits/stdc++.h>
using namespace std;
//friend function
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
  friend void tellSecret(Parent *ptr);  // This is called friend function

};
void tellSecret(Parent *ptr)
{
    cout<<ptr->taka<<" "<<ptr->password<<endl;
}

int main()
{

    Parent pt(1500,2345); //password
    tellSecret(&pt);

    return 0;
}



