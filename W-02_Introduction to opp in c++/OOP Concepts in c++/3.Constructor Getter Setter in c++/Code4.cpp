#include<bits/stdc++.h>
using namespace std;
//Encapsulations in c++
//setter and getter
//we can use it for password authentication
class Example
{
private:
    int x;
    int pass; //1234
public:
    Example(int p)
    {
        pass = p;
    }
    void setter(int a,int p)
    {
      if(pass == p)
      {
          x=a;
      }
      else
      {
          cout<<"Password didn't match"<<endl;
      }
    }

    int getter(int p)
    {
      if(pass == p)
      {
          return x;
      }
      else
      {
          cout<<"Password didn't match"<<endl;
          return -1;
      }
    }
};
int main()
{
   Example a(1234); //password=1234
   a.setter(1500,1234); //input in setter//if i give here 1235
   cout<<a.getter(1234)<<endl;  //print in getter //1235 //Then password will be wrong
    return 0;
}
/*

   Example a(1234); //password=1234
   a.setter(1500,1235); //input in setter//if i give here 1235
   cout<<a.getter(1235)<<endl;  //print in getter //1235 //Then password will be wrong




*/



