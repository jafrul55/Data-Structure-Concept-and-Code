#include<bits/stdc++.h>
using namespace std;
//Linear Search Implementation:
//Only for know value
int main()
{
    int size;
    cin>>size;
    int array[size];

    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }
    int checkvalue;
    cout<<"Please enter the value you want to search: ";
    cin>>checkvalue;

    for(int i=0; i<size; i++)
    {
        if(array[i] == checkvalue)
        {
            cout<<"Index No:" <<i<<" "<<"Position:" << i+1<<endl;
            break;

        }
    }


    return 0;
}
