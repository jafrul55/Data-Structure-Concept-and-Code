#include<bits/stdc++.h>
using namespace std;
//min() and max() Functions in c++
//we can find the min or max incase of array
int main()
{
int ar[5]={5,2,3,1,4};
int mn=ar[0];
int mx = ar[0];
for(int i=1;i<5;i++)
{

//    if(ar[i]<mn)
//    {
//        mn=ar[i];
//    }
//we can get min:
 mn = min(mn,ar[i]);
 //we can get max:
 mx = max(mx,ar[i]);
//ar[0] ar sata baki sob compare korba min pata
}
cout<<"Minimum-> "<<mn<<endl;
cout<<"Maximum-> "<<mx<<endl;
    return 0;
}



