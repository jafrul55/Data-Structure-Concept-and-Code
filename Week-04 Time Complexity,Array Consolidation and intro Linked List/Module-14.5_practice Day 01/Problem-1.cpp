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
    int m = n/2;
    for(int i=0; i<n; i++)
    {
        sum += A[m][i];
    }

    for(int i=0; i<n; i++)
    {
        sum += A[i][m];
    }

    sum = sum - A[m][m];

    for(int i=0; i<m; i++)
    {
        sum += A[0][i];
    }

    for(int i=0; i<m; i++)
    {
        sum += A[i][n-1];
    }

    for(int i=m+1; i<=n-1; i++)
    {
        sum += A[i][0];
    }

    for(int i=m+1; i<=n-1; i++)
    {
        sum += A[n-1][i];
    }

    cout<<sum<<endl;


    return 0;
}
