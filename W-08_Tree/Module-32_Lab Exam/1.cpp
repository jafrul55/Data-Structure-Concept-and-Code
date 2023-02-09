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

bool isSame(Node *root1, Node *root2)
{
    if (root1 == NULL && root2 == NULL)
    {
        return true;
    }
    else if (root1 == NULL || root2 == NULL)
        return false;

    if (root1->data != root2->data)
        return false;

    return isSame(root1->leftChild, root2->leftChild) && isSame(root1->rightChild, root2->rightChild);

    // alternative way
    //     else if(root1 != NULL && root2 != NULL)
    //     {
    //         return((root1->data == root2->data) &&
    //                isSame(root1->leftChild,root2->leftChild)&&
    //                isSame(root1->rightChild,root2->rightChild));
    //     }

    return false;
}

int main()
{

    int a;
    cin >> a;
    Node *root = new Node(a);
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *presentroot = q.front();
        q.pop();
        int x, y;
        cin >> x >> y;
        Node *n1 = NULL;
        Node *n2 = NULL;

        if (x != -1)
            n1 = new Node(x);
        if (y != -1)
            n2 = new Node(y);

        presentroot->leftChild = n1;
        presentroot->rightChild = n2;

        if (n1 != NULL)
            q.push(n1);
        if (n2 != NULL)
            q.push(n2);
    }

    int b;
    cin >> b;
    Node *root2 = new Node(b);
    queue<Node *> Q;
    Q.push(root2);
    while (!Q.empty())
    {
        Node *presentroot = Q.front();
        Q.pop();
        int k, l;
        cin >> k >> l;
        Node *m1 = NULL;
        Node *m2 = NULL;

        if (k != -1)
            m1 = new Node(k);
        if (l != -1)
            m2 = new Node(l);

        presentroot->leftChild = m1;
        presentroot->rightChild = m2;

        if (m1 != NULL)
            Q.push(m1);
        if (m2 != NULL)
            Q.push(m2);
    }

    if (isSame(root, root2))
    {
        cout << "These two binary trees are the same" << endl;
    }
    else
    {
        cout << "These two binary trees are not the same" << endl;
    }

    return 0;
}
/*
1
2 3
-1 -1 -1 -1
1
2 3
-1 -1 -1 -1
______________

1
2 -1
-1 -1
1
-1 2
-1 -1
__________

1
2 1
-1 -1 -1 -1
1
1 2
-1 -1 -1 -1

*/
