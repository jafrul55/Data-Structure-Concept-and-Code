#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,N;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>N;
        int array[N];
        for(int i=0; i<N; i++)
        {
            cin>>array[i];

        }

        int counter[1001] = {0};
        int last;
        for(int i=0;i<N;i++)
        {
            int val = array[i];
            counter[val]++;

            if(counter[0]<counter[val])
            {
                counter[0] = counter[val];
                last = N-counter[0];

            }
        }
          cout<<last<<endl;



    }


}
