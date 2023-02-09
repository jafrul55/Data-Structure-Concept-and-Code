#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }

    int m;
    cin>>m;
    int B[m];
    for(int j=0; j<m; j++)
    {
        cin>>B[j];
    }

    int count = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(A[i] == B[j])
            {
                A[i]= -1;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        if(A[i] != -1)
        {
            cout<<A[i]<<" ";
        }
    }


    return 0;
}
