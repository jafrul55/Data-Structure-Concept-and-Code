#include <bits/stdc++.h>
using namespace std;
// Today we will talk about priority Queue
int main()
{

    cout << "Max pair print: " << endl;
    typedef pair<int, int> pa;

    priority_queue<pa, vector<pa>> PR;
    PR.push(make_pair(1, 9));
    PR.push(make_pair(6, 2));
    PR.push(make_pair(4, 1));

    while (!PR.empty())
    {
        cout << PR.top().first << "|" << PR.top().second << endl;
        PR.pop();
    }
    cout << endl
         << endl;
    //--------------------------------------------------------
    cout << "Min pair print: " << endl;
    typedef pair<int, int> PAIR;

    priority_queue<PAIR, vector<PAIR>, greater<PAIR>> pr;
    pr.push(make_pair(1, 9));
    pr.push(make_pair(6, 2));
    pr.push(make_pair(4, 1));

    while (!pr.empty())
    {
        cout << pr.top().first << "|" << pr.top().second << endl;
        pr.pop();
    }
    cout << endl
         << endl;

    return 0;
}