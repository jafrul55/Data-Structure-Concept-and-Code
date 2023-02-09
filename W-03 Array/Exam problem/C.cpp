#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
int size;
for(int i=0;i<t;i++)
{
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++)
    {
        cin>>array[i];


    }
   for(int i=0;i<size;i++)
   {
       for(int j=i+1;j<size;j++)
       {
           if(array[i]>array[j])
           {
           int temp = array[i];
           array[i] = array[j];
           array[j] = temp;
           }
       }
   }
   int count = 0;
    int a = array[0];
   for(int i=0;i<size;i++)
   {
       if(array[i]>a)
       {
           count++;
       }

   }
   cout<<count<<endl;
}




return 0;
}
