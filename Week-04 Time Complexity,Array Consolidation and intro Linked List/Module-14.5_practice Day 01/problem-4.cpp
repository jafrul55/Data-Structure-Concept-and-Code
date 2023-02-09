#include<bits/stdc++.h>
using namespace std;
int main()
{
int row,col,start,End;
int A[10][10];
cin>>row>>col;
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        cin>>A[i][j];
    }
}

int temp;
for(int i=0;i<row;i++)
{

start = 0;
End = col - 1;
while(start<End)
{
    temp = A[i][start];
       A[i][start] = A[i][End];
       A[i][End] = temp;
       start++;
       End--;
}

}
cout<<endl;
cout<<"Reverse of column: "<<endl;
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
