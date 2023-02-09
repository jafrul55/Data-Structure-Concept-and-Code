#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int Val;
    Node *left;
    Node *right;

    Node(int V)
    {
        Val = V;
        left = NULL;
        right = NULL;
    }
};

bool ispalindrome(string S)
{
    // use two pointer technique
    int left = 0;
    int right = S.length() - 1;
    while (left < right)
    {
        if (S[left] != S[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

void printPathRootToRight(Node *root, int path[], int length, int &count, string S)
{
    // here count reflect pass by reference
    if (root == NULL)
        return;

    path[length] = root->Val;
    length++;
    if (root->left == NULL && root->right == NULL)
    {
        string s = "";
        for (int i = 0; i < length; i++)
        {
            // build the string from the node values in the path
            s += S[path[i]];
        }
        // check if the string is a palindrome
        if (ispalindrome(s))
        {
            count++;
        }
    }
    else
    {
        printPathRootToRight(root->left, path, length, count, S);
        printPathRootToRight(root->right, path, length, count, S);
    }
}

// initial path
void printPath(Node *root, string S)
{
    int count = 0; // pass by value
    int arr[6];
    printPathRootToRight(root, arr, 0, count, S);
    cout << count << endl;
}
int main()
{
    string S;
    cin >> S;
    int a;
    cin >> a;
    Node *root = new Node(a);
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