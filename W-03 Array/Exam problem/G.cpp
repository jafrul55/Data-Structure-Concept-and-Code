#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int sum = N/100;
    int sum1 = N%10;
    if(sum == sum1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }


    return 0;
}
