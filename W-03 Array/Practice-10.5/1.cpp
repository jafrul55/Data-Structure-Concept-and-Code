#include<bits/stdc++.h>
using namespace std;
void sumarray(int array[],int n)
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {

        sum += array[i];

    }
    cout<<sum<<endl;
}
int main()
{
    cout<<"Enter Number: ";
    int n;
    cin>>n;
    int array[n];
    cout<<"Enter value of an array: ";
    for(int i=0; i<n; i++)
    {
        cin>>array[i];

    }

    cout<<"Sum of array: ";
    sumarray(array,n);



    return 0;
}
