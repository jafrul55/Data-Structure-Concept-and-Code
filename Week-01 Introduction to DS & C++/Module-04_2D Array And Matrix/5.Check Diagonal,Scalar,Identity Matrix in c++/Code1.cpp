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
if(row != col)
{
    cout<<"NO"<<endl;
    return 0;
}
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        if(i==j)
        {
            continue;  //ignore it

        }
        if(a[i][j]>0)
        {
            cout<<"NO"<<endl;
            return 0;
        }

    }
}
cout<<"Yes"<<endl; //korno bada baki golo zero hola ata digonal metrix
    return 0;
}


