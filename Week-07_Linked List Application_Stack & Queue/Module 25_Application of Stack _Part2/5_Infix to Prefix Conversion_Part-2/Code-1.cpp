#include <bits/stdc++.h>
#include "MYSTACK.cpp"
using namespace std;

int precisionCalc(char c)
{
   if (c == '^')
   {
      return 3;
   }
   else if (c == '/' || c == '*')
   {
      return 2;
   }
   else if (c == '+' || c == '-')
   {
      return 1;
   }
   else
      return -1;
}

string infixToPrefix(string chk)
{
   reverse(chk.begin(), chk.end()); // reverse function automatic have
   Stack<char> st;
   string result;

   for (int i = 0; i < chk.length(); i++)
   {
      if (chk[i] >= '0' && chk[i] <= '9') //'a' to 'z' && 'A' to 'Z' variable you can use
      {
         result += chk[i];
      }
      // after reverse:
      //  ) --->Opening AND ( ---> Closing
      else if (chk[i] == ')') // if become "opening bracket"
      {
         st.push(chk[i]);
      }
      else if (chk[i] == '(') // if become "closing bracket"
      {
         while (!st.empty() && st.Top() != ')')
         {
            result += st.pop();
         }

         if (!st.empty()) // to remove bracket from stack
         {
            st.pop();
         }
      }

      else
      {
         while (!st.empty() && precisionCalc(st.Top()) >= precisionCalc(chk[i]))
         {
            result += st.pop();
         }
         st.push(chk[i]);
      }
   }

   while (!st.empty())
   {
      result += st.pop();
   }

   reverse(result.begin(), result.end());
   return result;
}

int prefixEvaluation(string chk)
{
   Stack<int> st;
   for (int i = chk.length() - 1; i >= 0; i--)
   {
      if (chk[i] >= '0' && chk[i] <= '9') // chk[i] 0 to 9 --->Operand
      {
         st.push(chk[i] - '0'); // for remove Assci Value//you can also use typecasting
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

   string infix = "(5*((6^2)+(7-(2/6))))-((7*(8+1))+(5*4))";
   string prefix;
   prefix = infixToPrefix(infix);
   cout << endl
        << prefix << endl
        << prefixEvaluation(prefix) << endl
        << endl;
}
