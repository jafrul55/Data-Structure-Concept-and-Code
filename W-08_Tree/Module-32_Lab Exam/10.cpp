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
vector<int> ans; // dynamic array
void inorder(Node *root)
{
    if (root == NULL) // base case
        return;
    inorder(root->leftChild);
    ans.push_back(root->data);
    inorder(root->rightChild);
}

int second_minimum(Node *root)
{
    inorder(root);

    sort(ans.begin(), ans.end()); // sort value first to last
    for (int i = 0; i < ans.size() - 1; i++)
    {
        if (ans[i] != ans[i + 1])
            return ans[i + 1];
    }
    return -1;
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

    int val = second_minimum(root);
    cout << val << endl;
    return 0;
}
/*


*/
