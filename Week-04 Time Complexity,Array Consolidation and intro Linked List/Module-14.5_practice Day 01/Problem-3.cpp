#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int A[n][n];
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
       if(i==j)
       {
           cout<<"1"<<" ";
       }
       else
       {
           cout<<"0"<<" ";
       }
    }
    cout<<endl;

}


return 0;
}
