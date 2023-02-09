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
    chk += (to_string(root->data)) + " ";
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

treeNode *insertionBST(treeNode *root, int Value)
{
    treeNode *newNode = new treeNode(Value);
    if (root == NULL)
    {
        root = newNode;
        return root;
    }
    // Value < root->data
    if (Value < root->data)
    {
        root->leftChild = insertionBST(root->leftChild, Value);
    }
    else if (Value > root->data)
    {
        root->rightChild = insertionBST(root->rightChild, Value);
    }
}

// search a Node in BST and Print searchPath
treeNode *searchBST(treeNode *root, int value)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == value)
    {
        cout << root->data << " ";
        return root;
    }

    else if (value < root->data)
    {
        cout << root->data << "->";
        searchBST(root->leftChild, value);
    }
    else
    {
        cout << root->data << "->";
        searchBST(root->rightChild, value);
    }
}
//----------------------------------------------
treeNode *inorderSuccessor(treeNode *root)
{
    treeNode *curr = root;
    while (curr->leftChild != NULL)
    {
        curr = curr->leftChild;
    }
    return curr;
}

treeNode *deletionBST(treeNode *root, int value)
{
    if (value < root->data)
    {
        root->leftChild = deletionBST(root->leftChild, value);
    }
    else if (value > root->data)
    {
        root->rightChild = deletionBST(root->rightChild, value);
    }
    else
    {
        // implementation of 3 case:
        if (root->leftChild == NULL) // case 1 |case 2
        {
            treeNode *temp = root->rightChild;
            free(root);
            return temp;
        }

        else if (root->rightChild == NULL) // case 2
        {
            treeNode *temp = root->leftChild;
            free(root);
            return temp;
        }
        else // case 3
        {
            treeNode *temp = inorderSuccessor(root->rightChild);
            // inorder successor always stay in right side
            root->data = temp->data;
            root->rightChild = deletionBST(root->rightChild, temp->data);
        }
        return root;
    }
}
void zigzagTraversal(treeNode *root)
{
    stack<treeNode *> currentLevel;
    stack<treeNode *> nextLevel;

    bool LeftToRight = true; // flag
    currentLevel.push(root);
    while (!currentLevel.empty())
    {
        treeNode *x = currentLevel.top();
        currentLevel.pop();
        cout << x->data << " ";

        if (LeftToRight)
        {
            if (x->leftChild)
            {
                nextLevel.push(x->leftChild);
            }
            if (x->rightChild)
            {
                nextLevel.push(x->rightChild);
            }
        }
        else
        {
            if (x->rightChild)
            {
                nextLevel.push(x->rightChild);
            }
            if (x->leftChild)
            {
                nextLevel.push(x->leftChild);
            }
        }
        if (currentLevel.empty())
        {
            LeftToRight = !LeftToRight;    // we will do toggle
            swap(currentLevel, nextLevel); // swap
        }
    }
}
int main()
{
    int n;
    cin >> n;
    treeNode *root = NULL;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        root = insertionBST(root, value);
    }

    string traversal = "";
    inOrder(root, traversal);
    cout << traversal;
    cout << endl;

    zigzagTraversal(root);
    // int key;
    // cin >> key;
    // if (searchBST(root, key) == NULL)
    // {
    //     cout << endl
    //          << "Value does not exits in the BST";
    // }
    // else
    // {
    //     cout << endl
    //          << "Value exits in the BST";
    // }

    // root = deletionBST(root, key);
    // string after = "";
    // inOrder(root, after);
    // cout << after;

    cout << endl
         << endl;
    return 0;
}
/*
9
11 5 9 43 34 1 2 7 21

9
5 1 2 7 9 11 21 34 43
*/