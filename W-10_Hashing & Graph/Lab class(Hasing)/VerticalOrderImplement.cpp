#include <bits/stdc++.h>
using namespace std;
class treeNode
{
public:
    int data;
    treeNode *leftChild;
    treeNode *rightChild;

    treeNode(int Value)
    {
        data = Value;
        leftChild = NULL;
        rightChild = NULL;
    }
};

void inOrder(treeNode *root, string &chk);   // Left Root Right
void preOrder(treeNode *root, string &chk);  // Root Left Right
void postOrder(treeNode *root, string &chk); // Left Rigth Root
void printTree(treeNode *root, int level);
void spaceprint(int level);

// Inorder Traversal:
void inOrder(treeNode *root, string &chk) // Left Root Right
{

    if (root == NULL)
        return;

    inOrder(root->leftChild, chk);
    chk += to_string(root->data);
    inOrder(root->rightChild, chk);
}

// Preorder Traversal:
void preOrder(treeNode *root, string &chk) // Root Left Right
{

    if (root == NULL)
        return;

    chk += to_string(root->data);
    preOrder(root->leftChild, chk);
    preOrder(root->rightChild, chk);
}

// PostOrder Traversal:
void postOrder(treeNode *root, string &chk) // Left Rigth Root
{

    if (root == NULL)
        return;

    postOrder(root->leftChild, chk);
    postOrder(root->rightChild, chk);
    chk += to_string(root->data);
}

void spaceprint(int level)
{
    for (int i = 0; i < level; i++)
    {
        cout << "   ";
    }
}

void printTree(treeNode *root, int level)
{
    if (root == NULL) // WHEN THE TREE IS EMPTY
    {
        return;
    }

    // CASE-1:
    if (root->leftChild == NULL && root->rightChild == NULL)
    {
        cout << root->data << endl;
        return;
    }
    else // CASE-2
    {
        cout << endl;
        spaceprint(level);
        cout << "Root: " << root->data << endl;
    }

    if (root->leftChild != NULL)
    {
        spaceprint(level);
        cout << "Left: ";
        printTree(root->leftChild, level + 1);
    }

    if (root->rightChild != NULL)
    {
        spaceprint(level);
        cout << "Right: ";
        printTree(root->rightChild, level + 1);
    }
}

void levelOrderTraversal(treeNode *root, string &chk)
{
    if (root == NULL)
    {
        return;
    }
    queue<treeNode *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        treeNode *chkNode = q.front();
        q.pop();
        if (chkNode != NULL)
        {
            cout << chkNode->data << " ";

            // To return  as a string and print at last.But it's Not necessary
            chk += to_string(chkNode->data);

            if (chkNode->leftChild != NULL)
            {
                q.push(chkNode->leftChild);
            }

            if (chkNode->rightChild != NULL)
            {
                q.push(chkNode->rightChild);
            }
        }
        else
        {
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
    }
}

// To print Leaves use PrintLeaves function

void printLeaves(treeNode *root)
{
    if (root == NULL)
        return;
    if (root->leftChild == NULL && root->rightChild == NULL)
    {
        cout << root->data << " ";
        return;
    }
    printLeaves(root->leftChild);
    printLeaves(root->rightChild);
}

// To print left Non Leaves function

void printLeftNonLeaves(treeNode *root)
{
    if (root == NULL)
        return;
    if (root->leftChild != NULL)
    {
        cout << root->data << " ";
        printLeftNonLeaves(root->leftChild);
    }
    else if (root->rightChild != NULL)
    {
        cout << root->data << " ";
        printLeftNonLeaves(root->rightChild);
    }
}

// To print Right Non Leaves function
void printRightNonLeaves(treeNode *root)
{
    if (root == NULL)
        return;

    if (root->rightChild != NULL)
    {
        cout << root->data << " ";
        printRightNonLeaves(root->rightChild);
    }
    else if (root->leftChild != NULL)
    {
        cout << root->data << " ";
        printRightNonLeaves(root->leftChild);
    }
}
void boundaryTraversal(treeNode *root)
{
    // First print root
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";

    // lB Non Leaves
    printLeftNonLeaves(root->leftChild);

    // LB leaves
    printLeaves(root->leftChild);

    // RB Leaves
    printLeaves(root->rightChild);

    // RB Non Leaves
    printRightNonLeaves(root->rightChild);
}

void verticalOrder(treeNode *root, int D, map<int, vector<int>> &M)
{
    if (root == NULL)
        return;

    M[D].push_back(root->data);                // data
    verticalOrder(root->leftChild, D - 1, M);  // leftchild
    verticalOrder(root->rightChild, D + 1, M); // rightchild
}
int main()
{
    int n;
    cin >> n;
    treeNode *allNodes[n];

    for (int i = 0; i < n; i++)
    {
        allNodes[i] = new treeNode(-1);
    }

    for (int i = 0; i < n; i++)
    {
        int Value, left, rigth;
        cin >> Value >> left >> rigth;

        allNodes[i]->data = Value;

        if (left > n - 1 || rigth > n - 1)
        {
            cout << "Invalid Index" << endl;
            break;
        }

        if (left != -1)
        {
            allNodes[i]->leftChild = allNodes[left];
        }

        if (rigth != -1)
        {
            allNodes[i]->rightChild = allNodes[rigth];
        }
    }

    //   boundaryTraversal(allNodes[0]);

    map<int, vector<int>> M;

    verticalOrder(allNodes[0], 0, M);

    // for print map:
    for (auto i : M)
    {
        cout << i.first << ": ";
        for (int j = 0; j < (i.second.size()); j++)
        {
            cout << (i.second)[j] << " ";
        }
        cout << endl;
    }

    cout << endl
         << endl;

    return 0;
}

/*
input_output format
9
0 1 2
1 3 4
2 5 6
3 -1 -1
4 -1 -1
5 7 8
6 -1 -1
7 -1 -1
8 -1 -1

*/