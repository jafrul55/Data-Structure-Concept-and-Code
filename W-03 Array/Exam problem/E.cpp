#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,q;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>n>>q;
        int array[n];
        for(int i=0; i<n; i++)
        {
            cin>>array[i];

        }
        cout<<"Case "<< i<<":"<<endl;
        for(int f=0; f<q; f++)
        {
            int input;
            cin>>input;

            if(input==1)
            {
                int K,A;
                cin>>K;
                A = array[K];
                cout<<A<<endl;
                array[K] = 0;
            }

            else if(input==2)
            {
                int K,V,A;
                cin>>K>>V;
                array[K] += V;

            }

            else if(input==3)
            {
                int r,l;
                cin>>r>>l;
                int sum = 0;
                for(int j=r; j<=l; j++)
                {
                    sum += array[j];

                }
                 cout<<sum<<endl;



            }
        }




    }


    return 0;
}

