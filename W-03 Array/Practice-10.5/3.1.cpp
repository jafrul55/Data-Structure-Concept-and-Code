#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin>>size;
    cout<<"Input Array: ";
    int array[size];
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }
    //Reverse array All

    cout<<"Reverse Array: ";
    int temp,start = 0,end = size-1;
   while(start< end)
   {
       temp = array[start];
       array[start] = array[end];
       array[end] = temp;
       start++;
       end--;
   }
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }



    return 0;
}


