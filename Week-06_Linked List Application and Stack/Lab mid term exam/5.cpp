#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int A[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>A[i][j];
        }
    }

    int sum = 0;
    int mid = n/2;

    for(int i=0; i<n; i++)
    {
        sum += A[mid][i];
    }


    for(int i=0; i<n; i++)
    {
        sum += A[i][mid];
    }

    sum = sum - A[mid][mid];

    for(int i=0; i<mid; i++)
    {
        sum += A[0][i];
    }

    for(int i=0; i<mid; i++)
    {
        sum += A[i][n-1];
    }

    for(int i=mid+1; i<=n-1; i++)
    {
        sum += A[i][0];
    }

    for(int i=mid+1; i<=n-1; i++)
    {
        sum += A[n-1][i];
    }

    cout<<sum;
    return 0;
}
