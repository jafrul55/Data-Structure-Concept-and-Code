#include <bits/stdc++.h>
using namespace std;
// Sum of Diagonal of a Matrix in c++
int main()
{
    int row, col, i, j;
    cin >> row >> col;
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j]; // input two dimensional
        }
    }
    // we will do sum:
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j) // this is primary diagonal
            {
                sum += a[i][j];
            }
        }
    }
    cout << sum << endl;

    return 0;
}
