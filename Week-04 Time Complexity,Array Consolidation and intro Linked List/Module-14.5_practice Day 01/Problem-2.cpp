#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s1,s2;
    cin>>n;
    int A[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>A[i][j];
        }
    }

    cout<<"Major diagonal: ";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                s1=A[i][j];
            }
        }
        cout<<s1<<" ";
    }
    cout<<endl;
    cout<<"Minor diagonal: ";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
               if(i+j == n-1)  //for 5 row and col
            {
                s2 = A[i][j];

            }


        }
         cout<<s2<<" ";



    }



return 0;
}
