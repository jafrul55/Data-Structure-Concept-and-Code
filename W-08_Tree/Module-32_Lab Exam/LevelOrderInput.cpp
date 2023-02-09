#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node* LeftChild;
    Node* RightChild;

    Node(int Val)
    {
        this->data = Val;
        LeftChild = NULL;
        RightChild = NULL;

    }
};

void print(Node* root)
{
    if(root == NULL) return;
    cout<<root->data<<" ";
    print(root->LeftChild);
    print(root->RightChild);
}
int main()
{
    //create first an int type variable
    int a;
    cin>>a; //input it

    //first set the a value in the root
    Node* root = new Node(a);

    //create a queue
    queue<Node * > q;

    //first keep root in the queue
    q.push(root);

    while(!q.empty())
    {
        //first grab the front root
        Node* presentNode = q.front();

        q.pop();//then delete root from queue

        //create two integer type variable
        int x,y;
        cin>>x>>y; //input those variable

        //create two NULL Node n1,n2
        Node* n1 = NULL;
        Node* n2 = NULL;

        //if x value not equal to -1
        if(x != -1)
            //Then x value keep in n1 Node
            n1 = new Node(x);

        //if y value not equal to -1
        if(y != -1)
            //Then y value keep in n2 Node
            n2 = new Node(y);

        //To connect root with left and right side
        presentNode->LeftChild = n1;
        presentNode->RightChild = n2;

        //To push in Queue
        if(n1 != NULL)
            q.push(n1);

        if(n2 != NULL)
            q.push(n2);

    }
    print(root);


    return 0;
}
/*
3
9 20
-1 -1 15 7
-1 -1 -1 -1

*/
