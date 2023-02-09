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
//Height Balanced Binary Tree/Complete Binary Tree
Node* insert_BST(int l,int r,int a[])
{
    if(l>r) return NULL;
    int mid  = l + (r-l)/2;
    Node* newNode = new Node(a[mid]);
    newNode->left = insert_BST(l,mid-1,a);
    newNode->right = insert_BST(mid+1,r,a);
    return newNode;
}
/*
7
1 2 3 4 5 6 7
value must be sorted input
*/
int main()
{
    int n;
    cin>>n;
    Node* root = NULL;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    root = insert_BST(0,n-1,a);
    level_order(root);

    return 0;
}

