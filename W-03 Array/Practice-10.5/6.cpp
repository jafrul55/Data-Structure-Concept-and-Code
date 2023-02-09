#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,i,j;
    cin>>size;
    int arr[size];
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    int size1;
    cin>>size1;
    int array[size1];
    for(j=0; j<size1; j++)
    {
        cin>>array[j];
    }
    int c=0;
    for(i=0; i<size; i++)
    {
        for(j=0; j<size1; j++)
        {
            if(arr[i] == array[j])
            {
                c=1;
                cout<<arr[i]<<" ";
            }

        }
    }
    if(c==0)
    {
        cout<<"Empty set"<<endl;
    }



}
