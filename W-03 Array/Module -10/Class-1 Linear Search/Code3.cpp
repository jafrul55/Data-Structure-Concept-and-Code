#include<bits/stdc++.h>
using namespace std;
//Linear Search Implementation:
//You can check a character by taking input from user
int main()
{
    int size;
    cin>>size;
    int array[size];

    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }
    char c;
    cout<< "Do You want to search: (Y/N) ";
    cin>>c;
    //to make everything upper:
    while(toupper(c) == 'Y')
    {

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

        cout<< "Do you want to Continue Searching: (Y/N) ";
        cin>>c;
    }







    return 0;
}


