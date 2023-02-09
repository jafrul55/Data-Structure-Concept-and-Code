#include<bits/stdc++.h>

using namespace std;
int main()
{
  char O[51],E[51];
  cin>>O>>E;
  int i=0,j=0;
  while(i<strlen(O) && j<strlen(E))
  {
    cout<<O[i];
    cout<<E[j];
   i++;
   j++;
  }

 while(i<strlen(O))
  {
      cout<<O[i];

      i++;
  }

   while(i<strlen(E))
  {
      cout<<E[j];
      j++;
  }

  return 0;
}

