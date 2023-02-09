#include<bits/stdc++.h>
using namespace std;
int main()
{
     int frq[26]={0};
    char s[100000];
    cin>>s;

    for(int i=0;i<strlen(s);i++)
    {
        int val = s[i]-'a';
        frq[val]++;
    }
    for(int val=0;val<26;val++)
    {
        if((frq[val]) == 0)
        {

            cout<<(char)(val+97)<<endl;
            return 0;
        }
    }
    cout<<"None"<<endl;
    return 0;
}
