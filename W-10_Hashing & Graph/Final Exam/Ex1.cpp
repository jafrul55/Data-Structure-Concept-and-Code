#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N, C;
        cin >> N >> C;
        int arr[N];
        int sum = 0;
        int val = 0;
        for (int j = 1; j <= N; j++)
        {
            cin >> arr[j];
            sum += arr[j];
            val = sum * 2;
        }
        if (val > C)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
}