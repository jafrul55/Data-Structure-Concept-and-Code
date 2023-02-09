#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node* right;
    Node* left;

    Node(int val)
    {
        this->val = val;
        this->right = NULL;
        this->left = NULL;
    }
};
void level_order(Node* root)
{
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node* parent = q.front();
        q.pop();
        cout<<parent->val<<" ";
        if(parent->left != NULL) q.push(parent->left);
        if(parent->right != NULL) q.push(parent->right);

    }
}

void insert_BST(Node* &root,int val)
{
   if(root == NULL)
   {

       root = new Node(val);
       return;
   }
   if(val<root->val) insert_BST(root->left,val);
   else insert_BST(root->right,val);
}
/*
5
4 3 1 2 5

*/
int main()
{
    int n;
    cin>>n;
    Node* root = NULL;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        insert_BST(root,a);
    }

    level_order(root);


    return 0;
}
