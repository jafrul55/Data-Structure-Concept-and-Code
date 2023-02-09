#include<bits/stdc++.h>
using namespace std;

stack<int> sortStack(stack <int> &input)
{
    stack<int> tempstack;
    while(!input.empty())
    {
        int Value = input.top();
        input.pop();

        while(!tempstack.empty() && tempstack.top()<Value)
        {
            input.push(tempstack.top());
            tempstack.pop();
        }
        tempstack.push(Value);
    }
    return tempstack;
}

int main()
{
    stack <int> input;
    int N;
    cin>>N;
    for(int i=0; i<N; i++)
    {
        int M;
        cin>>M;
        input.push(M);
    }

    stack<int> Back = sortStack(input);
    cout<<"Sorted number are:\n";
    while(!Back.empty())
    {
        cout<<Back.top()<<" ";
         Back.pop();
    }


    return 0;
}
