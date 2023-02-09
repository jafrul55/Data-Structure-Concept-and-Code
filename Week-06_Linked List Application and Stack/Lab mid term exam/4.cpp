#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m;
    cin>>n>>m;
    int A[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>A[i][j];
        }
    }

    int c;
    int count[150]={0};

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            c = A[i][j];
            if(count[c]>0)
            {
                A[i][j] = -1;
            }
            else
            {
                  count[c]++;
            }

        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}
