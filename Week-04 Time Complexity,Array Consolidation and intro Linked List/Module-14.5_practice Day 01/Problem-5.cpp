#include<bits/stdc++.h>
using namespace std;
int main()
{
int row,col;
cin>>row>>col;
int A[row][col];
int freq[1000] = {0};
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        cin>>A[i][j];
        if(freq[A[i][j]]>0)
        {
            A[i][j]=-1;
        }
        else
        {
            freq[A[i][j]]++;
        }
    }
}
cout<<endl;
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        cout<<A[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}

