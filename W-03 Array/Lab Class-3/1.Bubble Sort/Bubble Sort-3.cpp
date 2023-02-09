#include<bits/stdc++.h>
using namespace std;
//Bubble Sort
//Redundant Testing:
//Dynamic Technique:
void printArray(int array[],int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int size;
    cin>>size;

    int array[size];

    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }
    cout<<"Before Sort: ";
    printArray(array,size);
    cout<<endl;
//Bubble sort Implementation:
    for(int i=1; i<size; i++)
    {
     cout<<"iteration no: " << i << endl;

        for(int j=0; j<size-i; j++)  //size-i-1
        {
            if(array[j]<array[j+1])  //Descending Order(Big to Small)
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            printArray(array,size);
        }
        cout<<endl;

    }

    cout<<"After Sort: ";
    printArray(array,size);
    cout<<endl;

    return 0;
}

