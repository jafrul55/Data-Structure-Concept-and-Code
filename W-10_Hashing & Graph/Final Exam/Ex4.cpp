#include <bits/stdc++.h>
using namespace std;
priority_queue<int> PQ;
class Node
{
public:
    int Val;
    Node *leftChild;
    Node *rightChild;

    Node(int V)
    {
        this->Val = V;
        leftChild = NULL;
        rightChild = NULL;
    }
};

void InorderTraversal(Node *root)
{

    if (root == NULL)
    {
        return;
    }
    InorderTraversal(root->leftChild);
    PQ.push(root->Val);
    // cout << root->Val << " ";
    InorderTraversal(root->rightChild);
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

    // priority_queue<int> PQ;
    InorderTraversal(root);
    int Q;
    cin >> Q;
    while (Q--)
    {
        int A;
        cin >> A;
        if (A == 1)
        {
            int B;
            cin >> B;
            PQ.push(B);
        }
        else
        {
            cout << PQ.top() << endl;
            PQ.pop();
        }
    }

    return 0;
}