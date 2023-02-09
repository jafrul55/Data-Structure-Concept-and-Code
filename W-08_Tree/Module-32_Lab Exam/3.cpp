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

        this->data = Val;
        leftChild = NULL;
        rightChild = NULL;
    }

};
void level_order_reverse(Node* root)
{
    if(root == NULL)
    {
        return;
    }

    queue<Node*>Q;
    Q.push(root);
    stack<int>S;
    while(!Q.empty())
    {
        Node* newNOde = Q.front();
        Q.pop();

        S.push(newNOde->data);

        if(newNOde->rightChild != NULL)
        {
            Q.push(newNOde->rightChild);
        }

        if(newNOde->leftChild != NULL)
        {
            Q.push(newNOde->leftChild);
        }
    }
    while(!S.empty())
    {
        cout<<S.top()<<" ";
        S.pop();
    }
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

    level_order_reverse(root);

    return 0;
}
/*
3
9 20
-1 -1 15 7
-1 -1 -1 -1


*/


