#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,N,Q,I,J;
int a;
cin>>t;
for (int i = 1; i <=t; i++)
{
  cin>>N>>Q;
  int array[N];
  for (int i = 0; i < N; i++)
  {
     cin>>array[i];
  }
  cout<<"Case "<<i<<":"<<endl;
  for (int i = 0; i < Q; i++)
  {
      cin>>I>>J;
       int a = array[I-1];
    for(int k=I-1;k<J;k++)
      {
          if(array[k]<a)
          {
              a=array[k];
          }
      }

        cout<<a<<endl;
  }


}





return 0;
}
