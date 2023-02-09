#include <bits/stdc++.h>
using namespace std;
// vector take globally
vector<int> V[100];
bool visit[100];
void BFS(int source)
{
    queue<int> q;
    q.push(source);
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        if (visit[parent] == true)
            continue;
        cout << parent << " ";

        for (int i = 0; i < V[parent].size(); i++)
        {
            int children = V[parent][i];
            if (visit[children] == false)
                q.push(children);
        }
        visit[parent] = true;
    }
}
int main()
{
    int n, e, source;
    cin >> n >> e >> source;
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        V[a].push_back(b); // a->push=b
        V[b].push_back(a); // b->push=a
    }

    memset(visit, false, sizeof(visit));
    cout << endl;
    cout << "BFS Level order: ";
    BFS(source);
    return 0;
}
/*
6 7 1
1 2
1 0
1 3
0 3
3 5
3 4
4 5

*/