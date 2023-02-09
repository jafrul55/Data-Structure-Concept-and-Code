#include<bits/stdc++.h>
using namespace std;

int findfrequency(queue<int> Q,int M)
{

    int count = 0;
    for(int i=0; i<Q.size(); i++)
    {
        if(!Q.empty())
        {
            if(Q.front() == M)
                count++;
        }
        Q.pop();
        Q.push(Q.front());
    }

    if(count == 0)
    {
        return -1;
    }
    else
    {
        return count;
    }
}
int main()
{
    int n;
    cin>>n;
    queue <int> Q;
    for(int i=0; i<n; i++)
    {
        int N;
        cin>>N;
        Q.push(N);
    }
    int m;
    cin>>m;
    for(int i=0; i<m; i++)
    {
        int M;
        cin>>M;
        cout<<findfrequency(Q,M)<<endl;

    }




    return 0;
}
