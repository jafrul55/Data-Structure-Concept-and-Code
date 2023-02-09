#include<bits/stdc++.h>
using namespace std;
//Encapsulations in c++
//setter and getter
class Example
{
private:
    int x;
public:
    void setter(int a)
    {
      x=a;
    }

    int getter()
    {
      return x;
    }
};
int main()
{
   Example a;
   a.setter(1500); //input in setter
   cout<<a.getter()<<endl;  //print in getter
    return 0;
}



