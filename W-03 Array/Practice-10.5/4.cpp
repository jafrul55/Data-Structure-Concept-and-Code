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
    int max,min;
    max = array[0];
    min = array[0];
   int maxindex,minindex;
    for(int i=0; i<size; i++)
    {
        if(max<array[i])
        {
            max = array[i];
            maxindex = i;

        }
    }

    for(int i=0; i<size; i++)
    {
        if(min>array[i])
        {
            min = array[i];
            minindex = i;
        }
    }

      cout<<"Max: " <<max<<","<<"Index: "<< maxindex <<endl;
     cout<<"Min: " << min<<","<<"Index: "<< minindex <<endl;

    return 0;
}
