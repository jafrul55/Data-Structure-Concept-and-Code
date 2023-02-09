#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node* leftChild;
    Node* rightChild;

    Node(int Val)
    {
        data = Val;
        leftChild = NULL;
        rightChild = NULL;
    }
};


bool ismirror(Node*p,Node*q)
{
    if(p == NULL && q == NULL)
        return true;
    if(p == NULL || q == NULL)
        return false;
    else if(p != NULL && q != NULL)
    {
        return(p->data == q->data)&&
              ismirror(p->rightChild,q->leftChild)&&
              ismirror(p->leftChild,q->rightChild);
    }
    return false;

}
bool isSymmetric(Node* root)
{
    return ismirror(root,root);
}


int main()
{

    int a;
    cin>>a;
    Node* root = new Node(a);
    queue<Node* > q;
    q.push(root);
    while(!q.empty())
    {
        Node* presentroot = q.front();
        q.pop();
        int x,y;
        cin>>x>>y;
        Node* n1 = NULL;
        Node* n2 = NULL;

        if(x != -1)
            n1 = new Node(x);
        if(y != -1)
            n2 = new Node(y);

        presentroot->leftChild = n1;
        presentroot->rightChild = n2;

        if(n1 != NULL)
            q.push(n1);
        if(n2 != NULL)
            q.push(n2);
    }
    if(isSymmetric(root))
        cout<<"This tree is a symmetric tree"<<endl;
    else
        cout<<"This tree is not a symmetric tree"<<endl;

    return 0;
}
/*
1
2 2
3 4 4 3
-1 -1 -1 -1 -1 -1 -1 -1
__________________________
1
2 2
-1 3 -1 3
-1 -1 -1 -1
*/
