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

// void  printTree(treeNode* root,int level);
// void spaceprint(int level);

/*
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

 void spaceprint(int level)
 {
  for(int i=0;i<level;i++)
  {
      cout<<"   ";
  }
 }
 
 void  printTree(treeNode* root,int level)
 {
    if(root == NULL) //WHEN THE TREE IS EMPTY
    {
      return;
    }

    //CASE-1:
    if(root->leftChild == NULL && root->rigthChild == NULL)
    {
      cout<<root->data<<endl;
      return;
    }
    else //CASE-2
    {
       cout<<endl;
       spaceprint(level);
       cout<<"Root: "<<root->data<<endl;
    }
    
    if(root->leftChild != NULL)
    {
       spaceprint(level);
       cout<<"Left: ";
       printTree(root->leftChild, level + 1);
    }
    
    if(root->rigthChild != NULL)
    {
      spaceprint(level);
      cout<<"Right: ";
      printTree(root->rigthChild,level + 1);
    }
   
 }

int main()
{
  int n;
  cin>>n;
  treeNode* allNodes[n];

  for(int i=0;i<n;i++)
  {
      allNodes[i] = new treeNode(-1);
  }

  for(int i=0;i<n;i++)
  {
    int Value,left,rigth;
    cin>>Value>>left>>rigth;

    allNodes[i]->data = Value;

   if(left>n-1 || rigth>n-1)
   {
      cout<<"Invalid Index"<<endl;
      break;
   }

    if(left != -1)
    {
       allNodes[i]->leftChild = allNodes[left];

    }

    if(rigth != -1)
    {
      allNodes[i]->rigthChild = allNodes[rigth];
    }
  }

  //For print the tree:
    printTree(allNodes[0],0);

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

*/