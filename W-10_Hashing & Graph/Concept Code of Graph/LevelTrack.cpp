#include <bits/stdc++.h>
using namespace std;
// vector take globally
vector<int> V[100];
bool visit[100];
void BFS(int source)
{
    queue<pair<int, int>> q; // node + node level
    q.push({source, 0});     // for pair we use {},source level->0
    while (!q.empty())
    {
        pair<int, int> parent = q.front(); // pair for value and level
        q.pop();
        if (visit[parent.first] == true) // parent first mean node
            continue;
        cout << parent.first << " | " << parent.second << endl;
        ; // first is node and second is level

        for (int i = 0; i < V[parent.first].size(); i++) // go last size of parent first
        {
            int children = V[parent.first][i]; // it will work for parent node
            if (visit[children] == false)
                q.push({children, parent.second + 1}); // pair of node and level to push//level always +1 than parent level
        }
        visit[parent.first] = true;
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
    cout << "BFS Level order: " << endl;
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
------
6 7 1
5 3
4 5
1 0
1 2
1 3
3 0
4 3

*/