#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 1;
    int Y;
    cin >> Y;
    if (Y == n)
    {
        cout << n << endl;
    }
    else
    {
        long long int sum = 0;
        for (int i = 1; i < Y; i++)
        {

            sum = pow(2, n);
            n += 2;
        }
        cout << sum << endl;
    }

    return 0;
}