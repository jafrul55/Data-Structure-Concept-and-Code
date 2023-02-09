#include<bits/stdc++.h>
using namespace std;
//use tamplate to call different types of datatype
template<typename T> T myMax(T a,T b)
{
   return (a>b)?a:b;  //conditional Operator
}
int main()
{
      //functionName <Datatype> (Parameter)
      cout<<myMax<int>(3,7)<<endl;
      cout<<myMax<float>(3.5,7.9)<<endl;
      cout<<myMax<char>('a','f')<<endl;

   return 0;
}