#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int array[size];
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }

    int check;
    cin>>check;
    int C = 0;
    int index[size];
    int x = 0;
    for(int i=0; i<size; i++)
    {
        if(array[i] == check)
        {
            C=1;
            index[x] = i;
            x++;


        }

    }
    cout<<"FOUND at index position: ";
    for(int i=0;i<x;i++)
    {
        int val = index[i];
        if(i==x-1)
        {
          cout<<val;
        }
        else
        {
            cout<<val<<",";
        }
    }

    if(C==0)
    {
        cout<<"NOT FOUND"<<endl;
    }
}
