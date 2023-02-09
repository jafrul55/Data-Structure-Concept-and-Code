#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int V)
{
    cout << V << ": ";
    for (auto element : adj[V])
    {
        cout << "->" << element;
    }
}

int main()
{
    int V, E;
    cin >> V >> E;
    vector<int> adj[V];
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        addEdge(adj, u, v);
    }

    for (int i = 0; i < V; i++)
    {
        printGraph(adj, i);
    }

    return 0;
}
/*
5 7
0 1
0 4
1 2
1 3
1 4
2 3
3 4

*/