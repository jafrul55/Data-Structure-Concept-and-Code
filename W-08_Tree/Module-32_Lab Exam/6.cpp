#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *leftChild;
    Node *rightChild;

    Node(int Val)
    {
        this->data = Val;
        leftChild = NULL;
        rightChild = NULL;
    }
};
//This is a Invert function:
Node* invert_tree(Node *root)
{
    if (root == NULL)
        return root;
    else
    {

        invert_tree(root->leftChild);
        invert_tree(root->rightChild);

        swap(root->leftChild,root->rightChild);
        return(root);
    }

}
//we will print tree value inorder method
void print_Inorder(Node* root)
{
    if(root == NULL)
        return;
  //Inorder method:

    print_Inorder(root->leftChild);
    cout<<root->data<<" ";
    print_Inorder(root->rightChild);
}

/*
4
2 7
1 3 6 9
-1 -1 -1 -1 -1 -1 -1 -1

*/
int main()
{
    int a;
    cin >> a;
    Node *root = new Node(a);
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *presentNode = q.front();
        q.pop();
        int x, y;
        cin >> x >> y;
        Node *N1 = NULL;
        Node *N2 = NULL;

        if (x != -1)
            N1 = new Node(x);
        if (y != -1)
            N2 = new Node(y);
        presentNode->leftChild = N1;
        presentNode->rightChild = N2;

        if (N1 != NULL)
            q.push(N1);
        if (N2 != NULL)
            q.push(N2);
    }

    invert_tree(root);

    print_Inorder(root);
    cout<<endl;

    return 0;
}

