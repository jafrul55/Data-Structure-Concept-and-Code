#include <bits/stdc++.h>
// Include here my head file:
#include "MyStack2.h"
using namespace std;

// There is lot of stack available:
/*
stack of float,double,char,
string,array,structure,object of class

*/
int main()
{

    /*
       you can use here int,float,
       double,char,pair so on..
    */
//For Pair:
    Stack<pair<int, char>> st;
    st.push(make_pair(1, 'a'));
    st.push(make_pair(2, 'b'));
    st.push(make_pair(3, 'c'));


    while (!st.empty())
    {
       pair <int,char> chk;
       chk = st.pop();
        cout << chk.first<< " | " <<chk.second <<endl;
     //first is a first element and second is a second element
    }

    cout << st.size() << endl;
    if (!st.empty())
    {
      pair <int,char> chk;
      chk = st.Top();
      cout<<chk.first <<" | "<<chk.second <<endl;
    }
       

    return 0;
}