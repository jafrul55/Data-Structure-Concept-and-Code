#include<bits/stdc++.h>
using namespace std;
//Check Symmetric Matrix in c++
//When we do transport but value become same that is called
//Symmetric
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

for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        if(a[i][j] != a[j][i]) //Symmetric Matrix check
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
}
cout<<"YES"<<endl;

    return 0;
}


/*
3 3
1 2 3
2 6 4
3 4 5
this is symmetric
a[i][j] == a[j][i]
*/




