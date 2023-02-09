#include<bits/stdc++.h>
using namespace std;
//Swap()Function in c++
int main()
{
int a[]={2,4,1,5,6},n=5;
for(int i=0;i<n-1;i++)
{
    for(int j=i+1;j<n;j++)
    {
        //we have a c++ function to swap
        if(a[i]>a[j])
        {
            swap(a[i],a[j]);  //a[i]->a[j] and a[j]->a[i]
        }

    }
    }

   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }



    return 0;
}
