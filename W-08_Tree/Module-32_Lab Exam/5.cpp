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

void zigzag_order(Node *root)
{
    if (root == NULL)
        return;
    stack<Node *> CurrentLevel;
    stack<Node *> NextLevel;

    bool LeftToRight = true;
    CurrentLevel.push(root);

    while (!CurrentLevel.empty())
    {
        // To grab the top value in stack(LIFO)
        Node *NewNode = CurrentLevel.top();
        CurrentLevel.pop();

        if (NewNode != NULL)
        {
            cout << NewNode->data << " ";
            // if left to right
            if (LeftToRight)
            {
                if (NewNode->leftChild != NULL)
                    NextLevel.push(NewNode->leftChild);
                if (NewNode->rightChild != NULL)
                    NextLevel.push(NewNode->rightChild);
            }
            // if right to left
            else
            {
                if (NewNode->rightChild != NULL)
                    NextLevel.push(NewNode->rightChild);
                if (NewNode->leftChild != NULL)
                    NextLevel.push(NewNode->leftChild);
            }
        }

        if (CurrentLevel.empty()) // one level become finish
        {
            // when one level all node become traverse
            //  LeftToRight make it oppositor
            //Now it's time to change the direction
            LeftToRight = !LeftToRight;
            // Now swap current stack and next stack
            swap(CurrentLevel, NextLevel);
        }
    }
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
    zigzag_order(root);

    return 0;
}
