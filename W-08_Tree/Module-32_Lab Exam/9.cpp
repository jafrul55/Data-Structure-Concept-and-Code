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
bool is_unival(Node *root)
{

    if (root == NULL) // base case
        return true;

    if (root->leftChild != NULL)
    {
        if (root->data != root->leftChild->data)
        {
            return false;
        }
    }

    if (root->rightChild != NULL)
    {
        if (root->data != root->rightChild->data)
        {
            return false;
        }
    }
    // recursion for left and right child
    return is_unival(root->leftChild) && is_unival(root->rightChild);
}
/*
1
1 1
1 1 -1 1
-1 -1 -1 -1 -1 -1
2
2 2
5 2 -1 -1
-1 -1 -1 -1
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

    if (is_unival(root) == true)
    {
        cout << "This is an univalued tree" << endl;
    }
    else
    {
        cout << "This is not an uni_valued tree" << endl;
    }
}
/*


*/
