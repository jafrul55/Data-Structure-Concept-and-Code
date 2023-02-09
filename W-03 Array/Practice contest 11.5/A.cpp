#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    int t;
    cin>>t;
    while (t--)
    {
        cin>>S;
        int x = S.size();
        bool one = false;
        bool zero = false;
        bool flag = false;
        int C = 0;
        for (int i = 0; i < x; i++)
        {
            if(one==false && S[i]=='1')
            {
                one = true;
            }
            if(zero == false && S[i]=='0' && one == true)
            {
                zero = true;

            }

            if(S[i] == '1' && one == true && zero == true)
            {
               C=1;
               cout<<"NO"<<endl;
               break;
            }

        }

        if(C == 0)
        {
            cout<<"YES"<<endl;
        }




        }

    return 0;
}
