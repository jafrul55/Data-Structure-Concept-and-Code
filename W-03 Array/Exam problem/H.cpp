#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
int len = s.size();
int N;
for (int i = 0; i < len; i++)
{
  if(s[i]=='A')
  {
    N = i;
    break;
  }
}

int M;
for (int i = 0; i<len; i++)
{
  if(s[i]=='Z')
  {
    M = i;

  }
}

int result = M-N+1;
cout<<result<<endl;

}
