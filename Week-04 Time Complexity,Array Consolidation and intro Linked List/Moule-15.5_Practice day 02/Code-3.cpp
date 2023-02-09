#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int array[m][n];

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>array[i][j];
        }
    }

  int index1,index2;
    int max = array[0][0];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(array[i][j]>max)
            {
                max = array[i][j];
                index1 = i;
                index2 = j;



            }
        }
    }

     cout<<"Max: "<<max<<endl;
    cout<<"Location: "<<"["<<index1<<"]"<<"["<<index2<<"]"<<endl;


    return 0;
}
