#include <bits/stdc++.h>
using namespace std;
// Today we will talk about Vector
int main()
{
    vector<int> V(3, -1);

    for (int i = 0; i < V.size(); i++)
    {
        cout << V[i] << " ";
    }
    cout << endl
         << endl;
    //----------------------------------------------
    V.push_back(4);

    // Iterator
    vector<int>::iterator it;
    for (it = V.begin(); it != V.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl
         << endl;
    //----------------------------------------------------
    //'Auto' Register in range based traversal
    for (auto element : V)
    {
        cout << element << " ";
    }
    cout << endl
         << endl;
    //-------------------------------------------------------
    // auto register in place of iterator
    for (auto it = V.begin(); it != V.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}