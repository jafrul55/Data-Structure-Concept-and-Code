#include <bits/stdc++.h>
using namespace std;
// Two Dimensional Array in c++
int main()
{
    int row = 4, col = 4;
    // we will use here nested loop
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << i << "," << j << " ";
        }
        cout << endl;
    }

    return 0;
}
