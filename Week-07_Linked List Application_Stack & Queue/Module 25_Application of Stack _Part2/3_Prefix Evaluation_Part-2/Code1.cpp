#include <bits/stdc++.h>
#include "MYSTACK.h"
using namespace std;
int prefixEvaluation(string chk)
{
  Stack<int> st;
  for (int i = chk.length() - 1; i >= 0; i--)
  {
    if (chk[i] >= '0' && chk[i] <= '9') // chk[i] 0 to 9 --->Operand
    {
      st.push(chk[i] - '0'); // for remove Assci Value//you can use typecasting
    }

    else // chk[i]----->Operator
    {
      int a = st.pop();
      int b = st.pop();

      switch (chk[i])
      {
      case '+':
        st.push(a + b);
        break;
      case '-':
        st.push(a - b);
        break;
      case '*':
        st.push(a * b);
        break;
      case '/':
        st.push(a / b);
        break;
        ;
      case '^':
        st.push(pow(a, b));
        break;

      default:
        break;
      }
    }
  }
  return st.Top();
}

/*
+*423  -->prefix input
-+7*45+20 ---->second prefix input

*/
int main()
{
  cout << "Output of prefix :" << endl;

  //  cout<<prefixEvaluation("+*423")<<endl<<endl;

  cout << prefixEvaluation("-+7*45+20") << endl
       << endl;
       return 0;
}