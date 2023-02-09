#include<bits/stdc++.h>

using namespace std;

int main()
{
 char str[100];
 cin>>str;
int count[26]={0};
for(int i=0;i<strlen(str);i++)
{
    char val = str[i];
    count[val-97]++;
}
for(char val='a';val<='z';val++)
{
    if(count[val-97]>1)
    {
        cout<<"no"<<endl;
        return 0;
    }
}
cout<<"yes"<<endl;





    return 0;
}
