#include<bits/stdc++.h>
using namespace std;
//Two Dimensional Array in c++
int main()
{
  int row = 4,col=4;
  int a[row][col];
  //Now we will input row and col value
    cout<<"Input:"<<endl;
  for(int i=0;i<row;i++)
  {
      for(int j=0;j<col;j++)
      {
          cin>>a[i][j];  //input //i=row,j=col

      }
  }
  cout<<endl;
  cout<<"Output:"<<endl;
  for(int i=0;i<row;i++)
  {
      for(int j=0;j<col;j++)
      {
          cout<<a[i][j]<<" ";  //output //row and col
      }
      cout<<endl;
  }


    return 0;
}
