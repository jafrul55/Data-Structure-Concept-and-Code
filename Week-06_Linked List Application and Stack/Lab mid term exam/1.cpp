#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int count[1001]= {0};

    for(int i=0; i<n; i++)
    {
        int C = arr[i];
        count[C]++;
    }

    for(int val=1; val<=1000; val++)
    {
        if(count[val]>0)
        {
            cout<<val<<" => "<<count[val]<<endl;
        }
    }



    return 0;
}
