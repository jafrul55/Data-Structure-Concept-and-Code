#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int array[n][n];
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>array[i][j];
        }
    }

    int sum = 0;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i == j)
            {
                sum += array[i][j];


            }
        }
    }
    cout<<sum<<endl;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i+j == n-1)
            {
                 if(i==j)
                {
                    continue;
                }
                sum += array[i][j];

            }
        }
    }

    cout<<sum<<endl;

    for(i=1;i<n-1;i++)
    {
        sum += array[0][i];
    }
    cout<<sum<<endl;


    for(i=1;i<n-1;i++)
    {
        sum += array[4][i];
    }
    cout<<sum<<endl;


    return 0;
}

