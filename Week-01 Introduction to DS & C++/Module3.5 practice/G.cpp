#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]>ar[j])
            {
                swap(ar[i],ar[j]);
            }
        }
    }
    for(int i=0;i<n-1;i++)
    {
      sum +=(ar[i+1]-ar[i]);
    }

    cout<<sum;

    return 0;

}
