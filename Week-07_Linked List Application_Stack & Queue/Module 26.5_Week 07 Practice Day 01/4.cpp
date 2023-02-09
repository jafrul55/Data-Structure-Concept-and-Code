#include<bits/stdc++.h>
using namespace std;
void print(queue<int> &Queue)
{
    while(!Queue.empty())
    {
        cout<<Queue.front()<<" ";
        Queue.pop();
    }
}

void reverse(queue<int> &Queue)
{
    stack<int> Stack;
    while(!Queue.empty())
    {
        Stack.push(Queue.front());
        Queue.pop();
    }

    while(!Stack.empty())
    {
        Queue.push(Stack.top());
        Stack.pop();
    }
}

int main()
{
    int n;
    cin>>n;
    queue <int> Q;
    for(int i=0; i<n; i++)
    {
        int M;
        cin>>M;
        Q.push(M);
    }

    reverse(Q);
    print(Q);

    return 0;
}
