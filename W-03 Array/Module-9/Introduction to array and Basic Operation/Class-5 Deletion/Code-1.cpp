#include<bits/stdc++.h>
using namespace std;
//Deletion:
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

int pos;
cout<< "Position of the Deletion: ";
cin>>pos;

if(pos<0 || pos> size-1) //Insertion--->size,Deletion--->size-1
{
    cout<< "Invalid Index"<<endl;
}
else
{

//Deletion:
if(pos == size-1)
{
    //for last value
    size--;
}

else
{
    //For start or Mid Value
    //pos+1 ......>size-1;
    for(int i=pos+1;i<size;i++)
    {
        array[i-1] = array[i];
    }
    size--;

}

}
cout<< "Array After the Deletion : ";
printArray(array,size);

return 0;
}
/*
we will learn three thing in this module:
1.Traversal
2.Insertion  //input->5 2 3 9 2
There are two insertion:
1.Swapping Insertion(which is go back from position to size) and set size.(there need much time/n time)
2.secret tricks()which will keep position value in the size and in the position value we will keep value.(we just need 1 time)
ans:In the specific index number we take user specific value and we will insert it.
3.Deletion








*/


