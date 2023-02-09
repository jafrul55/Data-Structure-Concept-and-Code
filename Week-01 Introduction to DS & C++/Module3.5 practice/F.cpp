#include<bits/stdc++.h>
using  namespace std;
int main()
{
    //Sorting
    int N,K;
    cin>>N>>K;
    int ar[N];
    for(int i=0;i<N;i++)
    {
        cin>>ar[i];
    }
//Selection sort:
    for(int i=0;i<N-K;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            if(ar[i]>ar[j])  //sorting small to big
            {
                swap(ar[i],ar[j]);
            }
        }

    }

int sum=0;
for(int i=N-K;i<N;i++)
{
    sum+=ar[i];
}
cout<<sum<<endl;

    return 0;
}
