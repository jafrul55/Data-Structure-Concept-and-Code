#include<bits/stdc++.h>
using namespace std;
//Dynamic Allocation in c++
int main()
{
//But incase of c++
int *ptr=new int[10]{0};  //int[10] 10 ta index banaba and Zero index a raka daba
//here new is a heap
  for(int i=0;i<10;i++)
  {
      cout<<ptr[i]<<endl;
  }
  //we can use here delete instead of free in c++ to free momory
  delete ptr;
  return 0;
}


