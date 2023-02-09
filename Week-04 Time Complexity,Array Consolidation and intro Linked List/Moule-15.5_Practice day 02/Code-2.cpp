#include<bits/stdc++.h>
using namespace std;
void multiply(int array1[3][3],int array2[3][3])
{
    int i,j;
    int arr[3][3];
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            arr[i][j] = 0;

            for(int k=0; k<3; k++)
            {
                //Multiplication Here:
                arr[i][j] += array1[i][k] * array2[k][j];  // main math term here

            }
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }
}
int main()
{
    int mul1[3][3],mul2[3][3];
    int i,j;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>mul1[i][j];

        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>mul2[i][j];
        }
    }
//call the function:
    multiply(mul1,mul2);

    return 0;
}
