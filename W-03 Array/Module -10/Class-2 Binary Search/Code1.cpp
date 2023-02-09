#include<bits/stdc++.h>
using namespace std;
//Binary Search

int binarySearch(int array[],int x,int lb,int ub)
{
    if(lb<=ub)
    {
        int mid;
        mid = (lb+ub)/2;
        //x == arr[MID]
        if(x == array[mid]) return mid;

        //x>arr[MID]
        //Right Side
        //here mid+1/lb-->ub
        else if(x>array[mid])
            binarySearch(array,x,mid+1,ub);

        //x<arr[MID]
        //Left Side
        //here lb->mid-1/ub
        else if(x<array[mid])
            binarySearch(array,x,lb,mid-1);

    }
    else
        return -1;

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
    int checkValue;
    cout<<"Please Enter the Value you want to Search: ";
    cin>>checkValue;


    int indexNumber;
    indexNumber = binarySearch(array,checkValue,0,size-1);

    if(indexNumber != -1)
    {
        cout<<"Index No:"<<indexNumber<<" "<<"Position No: "<<indexNumber+1<<endl;
    }
    else
    {
        cout<<" Not Found";
    }

    return 0;
}

