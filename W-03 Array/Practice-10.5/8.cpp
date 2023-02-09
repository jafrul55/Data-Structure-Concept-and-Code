#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
  for(int i=0;i<n;i++)
  {
      for(int j=i+1;j<n;j++)
      {
          if(array[i] == array[j])
          {
              for(int k=j;k<n;k++)
              {
                  array[k] = array[k+1];

              }
              n--;
              j--;
          }
      }
  }
  cout<<"After deleting duplicate value : ";
 for(int i=0;i<n;i++)
 {
      cout<<array[i]<<" ";
 }

    return 0;
}
