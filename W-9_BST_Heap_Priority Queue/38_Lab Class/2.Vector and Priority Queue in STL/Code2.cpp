#include <bits/stdc++.h>
using namespace std;
// Today we will talk about priority Queue
int main()
{
    // it will work for MAX priority Queue
    cout << "Max Priority Queue: " << endl;
    priority_queue<int, vector<int>> PQ;
    PQ.push(1);
    PQ.push(6);
    PQ.push(2);

    while (!PQ.empty())
    {
        cout << PQ.top() << endl;
        PQ.pop();
    }
    cout << endl
         << endl;
    //------------------------------------------------------
    // we can make it min priority queue
    cout << "Min Priority Queue: " << endl;
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(1);
    pq.push(6);
    pq.push(2);

    while (!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }
    cout << endl
         << endl;

    return 0;
}