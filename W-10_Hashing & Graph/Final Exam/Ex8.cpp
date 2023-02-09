#include <bits/stdc++.h>
using namespace std;
class Graph
{
    int V;
    list<int> *adj;

public:
    Graph(int Val)
    {
        this->V = Val;
        adj = new list<int>[Val];
    }

    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
    }

    int BFS(int source)
    {
        int count = 0;
        vector<bool> visited(V, false);
        queue<int> q;
        visited[source] = true;
        q.push(source);
        while (!q.empty())
        {

            int current_node = q.front();
            q.pop();
            for (auto element : adj[current_node])
            {
                int neighbour = element;
                if (visited[neighbour] != true)
                {
                    visited[neighbour] = true;
                    q.push(neighbour);
                    count++;
                }
            }
        }
        return count;
    }
};
int main()
{
    int V, E;
    cin >> V >> E;
    Graph g(V);
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v);
    }
    int source;
    cin >> source;

    cout << g.BFS(source);

    return 0;
}