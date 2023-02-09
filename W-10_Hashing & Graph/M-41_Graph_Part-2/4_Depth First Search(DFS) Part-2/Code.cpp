#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> edgeWeightPair;
class Graph
{
    int V;                     // for vertix
    list<edgeWeightPair> *adj; // adjacency edage

public:
    Graph(int V) // constructor
    {
        this->V = V;
        adj = new list<edgeWeightPair>[V];
    }
    void addEdge(int u, int v, int w)
    {
        adj[u].push_back(make_pair(v, w)); // 0=(1,7)
        adj[v].push_back(make_pair(u, w)); // 1 =(0,7)
    }

    void printNeighbour(int chk)
    {
        cout << chk << ":";
        for (auto i = adj[chk].begin(); i != adj[chk].end(); i++)
        {
            cout << "(" << (*i).first << ", " << (*i).second << ")";
            //  << "->";
        }
    }
    //-------------------------------

    void BFS(int source)
    {
        vector<bool> Visited(V, false);
        queue<int> Q;
        Visited[source] = true;
        Q.push(source);

        while (!Q.empty())
        {
            int U = Q.front();
            cout << U << " ";
            Q.pop();
            for (auto element : adj[U])
            {
                int v = element.first;
                if (Visited[v] != true)
                {
                    Visited[v] = true;
                    Q.push(v);
                }
            }
        }
    }
    //----------------------------------
    void DFS(int source)
    {
        static vector<bool> Visited(V, false);
        // we use static because of recursion
        queue<int> Q;
        Visited[source] = true;
        cout << source << " ";
        for (auto element : adj[source])
        {
            int v = element.first;
            if (Visited[v] != true)
            {
                DFS(v); // recursion
            }
        }
    }
};
int main()
{
    int V, E, source;
    cin >> V >> E >> source;
    Graph g(V);
    for (int i = 0; i < E; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g.addEdge(u, v, w);
    }

    for (int i = 0; i < V; i++)
    {
        g.printNeighbour(i);
        cout << endl;
    }

    cout << endl;
    cout << "BFS Sequence: ";
    g.BFS(source);
    cout << endl;
    cout << "DFS Sequence: ";
    g.DFS(source);
    cout << endl;
    return 0;
}
/*
Bi-Directional Weighted Graph
BFS:
7 10 0
0 1 7
0 2 1
0 5 3
1 3 11
2 3 3
3 6 1
6 5 2
6 4 4
5 4 6
2 5 8

*/
