#include<bits/stdc++.h>
using namespace std;
//Conditions in c++;
//Nested if/else condition
int main()
{
int x;
cin>> x;
if(x%2==0)
{
    //jor
    if(x<10)
    {
        cout<<"Even and less than 10"<<endl;

    }
    else
    {
        cout<<"Even and greater than equal 10"<<endl;
    }

}
else
{
    //bijor
    cout<<"Odd"<<endl;
}




    return 0;
}
