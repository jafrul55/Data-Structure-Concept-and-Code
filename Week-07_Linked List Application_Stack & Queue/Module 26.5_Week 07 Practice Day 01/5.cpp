#include<bits/stdc++.h>
using namespace std;
void decimal_to_binary(int N)
{
    int arr[100];
    int i=0;
    while(N>0)
    {
        int Val = N%2;
        N = N/2;
        arr[i] = Val;
        i++;
    }

    for(int j=i-1; j>=0; j--)
    {
        cout<<arr[j];
    }
    cout<<endl;
}

void binary_generation(int n)
{
    for(int i=0; i<=n; i++)
    {
        decimal_to_binary(i);
    }
}

int main()
{
    int n;
      cout<<"Binary Number from 1 to : ";
          cin>>n;
    cout<<endl;
    binary_generation(n);


    return 0;
}

