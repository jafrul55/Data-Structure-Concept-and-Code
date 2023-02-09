#include<bits/stdc++.h>
#include "Stack.h"
using namespace std;

int globalID = 100;
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

    void setName(string name)
    {
        this->name = name;
    }

    void setSalary(float salary)
    {
        this->salary = salary;
    }

    person(string name,float salary)
    {
        setName(name);
        setSalary(salary);
        id = globalID;
        globalID++;

    }

    int getId()
    {
        return id;
    }

    string getname()
    {
        return name;
    }

    float getSalary()
    {
        return salary;
    }

    void print()
    {
        cout<<name<<" | "<<id<<" | "<<salary<<endl;

    }
};

int main()
{
    Stack <person> st;
    person a ("Jafrul",654.6);
    person b ("Alam",256.6);
    person c ("Tusar",455.5);

    st.Push(a);
    st.Push(b);
    st.Push(c);

//    while(!st.empty())
//    {
//        person printobj;
//        printobj = st.Pop();
//        printobj.print();
//    }

//I used it for Mid Value:
        person printobj;
        printobj = st.Mid();
        cout<<"Mid Value: ";
        printobj.print();

        person Topobj;
        Topobj = st.Top();
        cout<<"Top Value: ";
        Topobj.print();



    cout<<"Size: "<<st.Size()<<endl;


}





