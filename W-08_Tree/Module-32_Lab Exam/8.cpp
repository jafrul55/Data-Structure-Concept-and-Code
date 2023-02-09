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
void average_level(Node *root)
{
    if (root == NULL) // Base case
        return;
    queue<Node *> q; // first queue
    q.push(root);
    while (!q.empty())
    {
        double sum = 0;          // to count sum
        int count = 0;           // to count node level wise
        queue<Node *> temporary; // second queue
        while (!q.empty())
        {
            Node *newNode = q.front(); // grab the front
            q.pop();
            sum += newNode->data; // sum all node data
            count++;
            if (newNode->leftChild != NULL)
                temporary.push(newNode->leftChild);

            if (newNode->rightChild != NULL)
                temporary.push(newNode->rightChild);
        }
        // again initialize the queue with temporary queue
        q = temporary;
        cout << (sum / count) << " ";
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

    average_level(root);
    return 0;
}
/*


*/
