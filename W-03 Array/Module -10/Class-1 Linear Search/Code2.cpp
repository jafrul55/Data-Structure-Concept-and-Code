#include<bits/stdc++.h>
using namespace std;
//Linear Search Implementation:
//For Unknown Value
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

    int Flag =0;
    for(int i=0; i<size; i++)
    {
        if(array[i] == checkvalue)
        {
            Flag = 1;
            cout<<"Index No:" <<i<<" "<<"Position:" << i+1<<endl;

        }
    }
    if(Flag == 0)
    {
        cout<<"Not Found"<<endl;
    }





    return 0;
}

