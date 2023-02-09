#include <bits/stdc++.h>
// Include here my head file:
#include "MyStack3.h"
using namespace std;

// There is lot of stack available:
/*
stack of float,double,char,
string,array,structure,object of class
*/
int globalID = 100;  //global id start from 100
class person
{
  string name;
  int id;
  float salary;

  public:
  person()
  {
     name = "";
     id = -1;
     salary = -1.8;
  }


  void setName(string name)  //setter function
  {
    this->name = name;

  }

  void setSalary(float salary)  //setter function
  {
     this->salary = salary;

  }

  person(string name,float salary)  //person constructor
  { 
     setName(name);
     setSalary(salary);
     id = globalID;
     globalID++;
  }

  int getID(){
    return id;
  }
  string getname(){
    return name;
  }

  float getSalary()
  {
    return salary;
  }

  void print(){

   cout<<name << " | " <<id<<" | "<<salary<<endl;
  }

};
int main()
{

    /*
       you can use here int,float,
       double,char,pair so on..
    */


Stack <person> st;
person a ("Jafrul Alam",654.6);
person b ("Tusar",256.6);
person c ("Korim Hasan",354.7);

st.push(a);
st.push(b);
st.push(c);

// while(!st.empty())
// {
//    person printobj;
//    printobj = st.pop();
//    printobj.print();

// }

person printobj;
printobj = st.Top();
printobj.print();

cout<<st.size() <<endl;

    return 0;
}