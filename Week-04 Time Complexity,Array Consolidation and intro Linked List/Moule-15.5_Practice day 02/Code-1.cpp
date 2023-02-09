#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int Val = (int)sqrt(n);

    int arr[n];
    int array[Val][Val];
    int i,j,k=0;

    for(int k=0;k<n;k++)
    {
        cin>>arr[k];
    }

    for(i=0; i<Val; i++)
    {
        for(j=0; j<Val; j++)
        {

           array[i][j] = arr[k];
           k++;

        }
    }


    for(int i=0; i<Val; i++)
    {
        for(int j=0; j<Val; j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }




    return 0;
}
