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
    for(int i=size-1; i>=0; i--)
    {
        cout<<array[i]<<" ";

    }



    return 0;
}

