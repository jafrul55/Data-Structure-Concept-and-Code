#include<bits/stdc++.h>
using namespace std;
//Insertion:
void printArray(int array[],int size)
{
   for(int i=0;i<size;i++)
   {
        cout<<array[i]<<" ";
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
//to make insertion first we make sudo code
//size-1------>pos
int pos,value;
cout<< "Position of the Insertion: ";
cin>>pos;
cout<< "Value of the Insertion: ";
cin>>value;

if(pos<0 || pos> size)
{
    cout<< "Invalid Index";
}
else
{
//size-1(4) ------>pos(2)
//this is a insertion:
  for(int i=size-1;i>=pos;i--)
  {
    array[i+1] = array[i];
  }
  array[pos] = value;
}
cout<< "Array After the Insertion : ";
printArray(array,size+1);

return 0;
}
/*
we will learn three thing in this module:
1.Traversal
2.Insertion  //input->5 2 3 9 2
ans:In the specific index number we take user specific value and we will insert it.
3.Deletion








*/

