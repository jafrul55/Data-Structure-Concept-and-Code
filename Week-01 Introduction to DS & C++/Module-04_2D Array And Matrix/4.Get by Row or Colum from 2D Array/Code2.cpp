#include<bits/stdc++.h>
using namespace std;
//Sum of Diagonal of a Matrix in c++
int main()
{
int row,col,i,j;
cin>>row>>col;
int a[row][col];
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        cin>>a[i][j];  //input two dimensional
    }
}
int req_row;
cin>>req_row;   //when row become fixed that time column loop will use
for(int i=0;i<col;i++)
{
    cout<<a[req_row][i]<<" ";
}
    return 0;
}


