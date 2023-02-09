#include<bits/stdc++.h>
using namespace std;
//Traversal
void printArray(int array[],int size)
{
    //This is a traversal operation:
   for(int i=0;i<size;i++)
   {
       cout<<array[i]<<" "; //there are also space available.
   }
   cout<<endl;
}
int main()
{
int array[50];

int size;
cin>>size;
for(int i=0;i<size;i++)
{
    cin>>array[i];

}
cout<< "Given Array : ";
printArray(array,size);













return 0;
}
/*
we will learn three thing in this module:
1.Traversal
2.Insertion
3.Deletion








*/
