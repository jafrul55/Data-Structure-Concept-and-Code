#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        // useless way just take input
        int N;
        cin >> N;
        string str;
        cin >> str;
        string ST = "";
        for (int i = 0; i < str.length(); i++)
        {
            if ((str[i] == 'R' && str[i + 1] == 'B') || (str[i] == 'B' && str[i + 1] == 'R'))
            {
                // cout << 'P' << endl;
                ST += 'P';
                i++;
            }
            else if ((str[i] == 'R' && str[i + 1] == 'G') || (str[i] == 'G' && str[i + 1] == 'R'))
            {
                // cout << 'Y' << endl;
                ST += 'Y';
                i++;
            }

            else if ((str[i] == 'B' && str[i + 1] == 'G') || (str[i] == 'G' && str[i + 1] == 'B'))
            {
                // cout << 'C' << endl;
                ST += 'C';
                i++;
            }
            else if (str[i] == str[i + 1])
            {
                i++;
            }
            else
            {
                ST += str[i];
            }
        }

        stack<char> st;
        for (int i = 0; i < ST.length(); i++)
        {
            if (st.empty() || ST[i] != st.top())
            {
                st.push(ST[i]);
            }
            else
            {
                st.pop();
            }
        }
        // stack reverse
        string res = "";
        while (!st.empty())
        {
            // we use it for stack reverse
            res = st.top() + res;
            st.pop();
        }
        cout << res << endl;
    }

    return 0;
}
