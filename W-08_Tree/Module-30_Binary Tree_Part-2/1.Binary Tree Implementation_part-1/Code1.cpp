#include <bits/stdc++.h>
using namespace std;
class treeNode
{
public:
   int data;
   treeNode *leftChild;
   treeNode *rigthChild;

   treeNode(int Value)
  {
     data = Value;
     leftChild = NULL;
     rigthChild = NULL;
  }
};

void  printTree(treeNode* root,int level);

 void  printTree(treeNode* root,int level)
 {
   
 }
int main()
{
  int n;
  cin>>n;
  treeNode* allNodes[n];

  for(int i=0;i<n;i++)
  {
      //initially all value keep -1
      allNodes[i]->data = -1;
  }

  for(int i=0;i<n;i++)
  {
    int Value,left,rigth;
    cin>>Value>>left>>rigth;

    allNodes[i]->data = Value;

    if(left != -1)
    {
       allNodes[i]->leftChild = allNodes[left];

    }

    if(rigth != -1)
    {
      allNodes[i]->rigthChild = allNodes[rigth];
    }

    //For print the tree:
    printTree(allNodes[0],0);

  }

  return 0;
}
/*
input_output format
9
0 1 2
1 3 4
2 5 6
3 -1 -1
4 -1 -1
5 7 8
6 -1 -1
7 -1 -1
8 -1 -1
For preorder method:
Root: 0
Left:
   Root:1
   Left:3
   Rigth:4
Rigth:
    Root:2
    Left:
      Root:5
      Left:7
      Rigth:8
    Rigth:6
*/