#include <bits/stdc++.h>
// Include here my head file:
#include "MYSTACK.h"
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

    Stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);

    // Stack<float> st;
    // st.push(1.5);
    // st.push(2.5);
    // st.push(3.5);

    // Stack <string> st;

    // st.push("Jafrul");
    // st.push("Alam");
    // st.push("Tusar");

    while (!st.empty())
    {
        cout << st.pop() << endl;
    }

    cout << st.size() << endl;
    if (!st.empty())
        cout << st.Top() << endl; // st.Top()!=-1

    return 0;
}