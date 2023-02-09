#include <bits/stdc++.h>
#include "MYSTACK.h"
using namespace std;

// There is lot of stack available:
/*
stack of float,double,char,
string,array,structure,object of class

*/
int main()
{
    Stack st;
    // this is push operation:
    st.push(1);
    st.push(2);
    st.push(3);

    //    while (!st.empty())
    //    {
    //        cout << st.pop() << endl;
    //    }

    cout << st.size() << endl;
    if (!st.empty())
        cout << st.Top() << endl; // st.Top()!=-1

    return 0;
}
