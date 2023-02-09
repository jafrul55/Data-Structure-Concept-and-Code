#include<bits/stdc++.h>
using namespace std;
bool Balance_bracket(string temp)
{
    stack <char> st;
    for(int i=0; i<temp.length(); i++)
    {
        if(st.empty())
        {
            st.push(temp[i]);
        }
        else if((st.top() == '(' && temp[i] == ')')
                || (st.top() == '{' && temp[i] == '}')
                || (st.top() == '[' && temp[i] == ']'))
        {
            st.pop();
        }
        else
        {
            st.push(temp[i]);
        }

    }

    if(st.empty())
    {
        return true;
    }
    return false;

}

int main()
{
    string str;
    cin>>str;

    if(Balance_bracket(str))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    return 0;
}
