#include<bits/stdc++.h>
using namespace std;

void reverseKElement(int k,queue <int> &Q)
{
    stack <int> st;
    int i=0;
    while(i<k)
    {
        st.push(Q.front());
        Q.pop();
        i++;

    }
    while(!st.empty())
    {
        Q.push(st.top());
        st.pop();
    }

    for(int i=0; i<Q.size()-k; i++)
    {
        Q.push(Q.front());
        Q.pop();
    }
    while(!Q.empty())
    {
        cout<<Q.front()<<" ";
        Q.pop();
    }
    cout<<endl;

}
int main()
{
    int n,k;
    cin>>n>>k;
    int array[n];
    queue <int> Q;
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
        Q.push(array[i]);
    }

    reverseKElement(k,Q);

    return 0;
}
