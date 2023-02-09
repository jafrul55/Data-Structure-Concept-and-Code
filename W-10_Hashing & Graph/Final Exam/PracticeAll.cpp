#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int V;
    Node *left;
    Node *right;

    Node(int V)
    {
        this->V = V;
        left = NULL;
        right = NULL;
    }
};

bool ispalindrom(string s)
{
    int left = 0;
    int right = s.length() - 1;
    while (left < right)
    {
        if (s[left] != s[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

void printRootToLeaf(Node *root, int path[], int length, int &count, string S)
{
    if (root == NULL)
    {
        return;
    }
    path[length] = root->V;
    length++;

    if (root->left == NULL && root->right == NULL)
    {
        string s = "";
        for (int i = 0; i < length; i++)
        {
            s += S[path[i]];
        }
        if (ispalindrom(s))
        {
            count++;
        }
    }
    else
    {
        printRootToLeaf(root->left, path, length, count, S);
        printRootToLeaf(root->right, path, length, count, S);
    }
}

void printPath(Node *root, string S)
{
    int count = 0;
    int arr[6];
    printRootToLeaf(root, arr, 0, count, S);
    cout << count << endl;
}

int main()
{
    string S;
    cin >> S;
    int n;
    cin >> n;
    Node *root = new Node(n);
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *present = q.front();
        q.pop();

        int x, y;
        cin >> x >> y;
        Node *N1 = NULL;
        Node *N2 = NULL;
        if (x != -1)
        {
            N1 = new Node(x);
        }
        if (y != -1)
        {
            N2 = new Node(y);
        }
        present->left = N1;
        present->right = N2;

        if (N1 != NULL)
        {
            q.push(N1);
        }
        if (N2 != NULL)
        {
            q.push(N2);
        }
    }

    printPath(root, S);

    return 0;
}
/*
ABCAE
5
1 2
3 -1 -1 4
5 6 7 8
-1 -1 -1 -1 -1 -1 -1 -1

*/