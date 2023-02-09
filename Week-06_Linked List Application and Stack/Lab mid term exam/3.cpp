#include<bits/stdc++.h>
using namespace std;


int main()
{
    int T;
    cin>>T;
    int result;

    for(int t=0; t<T; t++)
    {
        int D;
        cin>>D;
        int arr1[D],arr2[D];
        for(int i=0; i<D; i++)
        {
            int x;
            cin>>x;
            if(i==0)
            {
                arr1[i] = x;
            }
            else
            {
                arr1[i] = x + arr1[i-1];
            }
        }

        for(int j=0; j<D; j++)
        {
            int y;
            cin>>y;
            if(j==0)
            {
                arr2[j] = y;
            }
            else
            {
                arr2[j] = y + arr2[j-1];
            }
        }

        int Q;
        cin>>Q;
        int q[Q];
        for(int k=0; k<Q; k++)
        {
            cin>>q[k];
        }
        for(int i=0; i<Q; i++)
        {
            result = arr1[q[i]] - arr2[q[i]];
            if(result>=0)
                cout<<"1"<<endl;
            else
                cout<<"0"<<endl;
        }
    }
    return 0;
}
