#include<bits/stdc++.h>
using namespace std;
int main()
{
int N,K,X,Y;
cin>>N>>K>>X>>Y;
int sum_one = 0;
int sum_two = 0;
int sum;
if(N<K)
    {
        for(int i=0;i<N;i++)
        {
            sum_one+=X;
        }
        cout<<sum_one;
        return 0;
    }


    for(int i=0;i< K;i++)
    {
       sum_one+=X;
    }
    for(int i=0;i< N-K;i++)
    {
        sum_two+=Y;
    }

    sum = sum_one + sum_two;
    cout<<sum;

    return 0;
}
