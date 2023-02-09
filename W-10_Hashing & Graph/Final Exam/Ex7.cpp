#include <bits/stdc++.h>
using namespace std;
// vector take globally
int A[100][100];

int main()
{
    int n, e, source;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        A[a][b] = 1;
        A[b][a] = 1;
    }

    cin >> source;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[source][i] == 1)
        {
            count++;
        }
    }
    cout << count << endl;

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