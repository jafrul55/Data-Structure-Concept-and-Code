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

int sum = 0;
int helper(Node *root)
{
    if (root == NULL)//base case
        return 0;
    int left = (root->leftChild ? helper(root->leftChild) : 0); //check leftChild
    int right = (root->rightChild ? helper(root->rightChild) : 0);//check rightChild

    sum += abs(left - right);//absulate different between two val leftChild and rightChild

    return left + right + root->data; //we we go back for return that time we use it
}
int findTilt(Node *root)
{
    helper(root); //call to helper function
    
    return sum;
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

    int Val = findTilt(root);
    cout << Val << endl;
    return 0;
}
/*
1
2 3
-1 -1 -1 -1
ans:1
4
2 9
3 5 -1 7
-1 -1 -1 -1 -1 -1
answer:15

*/
