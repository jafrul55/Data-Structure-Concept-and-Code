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
        sum += array[1][i];

    }


    for(i=0; i<n; i++)
    {
        sum += array[3][i];

    }


    if(n==7)
    {
        for(i=0; i<n; i++)
        {
            sum += array[5][i];

        }

    }


    for(i=0; i<n; i+=2)
    {

        sum += array[i][1];

    }


    for(i=0; i<n; i+=2)
    {

        sum += array[i][3];

    }

    if(n==7)
    {
        for(int i=0; i<n; i+=2)
        {
            sum += array[i][5];
        }

    }

    cout<<"The Sum is--> "<<sum<<endl;






    return 0;
}
