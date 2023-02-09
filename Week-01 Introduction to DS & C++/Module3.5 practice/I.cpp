#include<bits/stdc++.h>
using namespace std;
int main()
{
    char A[11],B[11],C[11];
    cin>>A>>B>>C;
    if(A[strlen(A)-1]==B[0] && B[strlen(B)-1]==C[0])
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

 return 0;
}
