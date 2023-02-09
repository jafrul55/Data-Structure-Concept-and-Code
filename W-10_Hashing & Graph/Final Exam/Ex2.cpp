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

    void AddEdge(int u, int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void BFS(int Source, int Kth)
    {
        vector<bool> visited(V, false);

        int level = 0;
        queue<pair<int, int>> q;
        visited[Source] = true;
        q.push({Source, level});

        // level[Source] = 0;

        while (!q.empty())
        {
            pair<int, int> Val = q.front();
            q.pop();

            if (Val.second == Kth)
            {
                cout << Val.first << " ";
            }
            for (auto i : adj[Val.first])
            {
                int E = i;
                if (!visited[E])
                {
                    visited[E] = true;
                    q.push({E, Val.second + 1});
                }
            }
        }
    }
};
int main()
{

    int V, E;
    cin >> V >> E;
    Graph g(V);
    for (int i = 0; i < E; i++)
    {
        int a, b;
        cin >> a >> b;
        g.AddEdge(a, b);
    }

    int level;
    cin >> level;

    g.BFS(0, level);

    return 0;
}
/*
11 10
0 1
0 3
1 4
1 5
1 6
3 8
5 2
5 10
8 9
8 7
3

*/