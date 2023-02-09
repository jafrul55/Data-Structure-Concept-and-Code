#include <bits/stdc++.h>
#include "Codehead.h"
using namespace std;
// Infix to Postfix:
int precisionCalc(char c)
{
   if (c == '^')
   {
      return 3;
   }
   else if (c == '*' || c == '/')
   {
      return 2;
   }
   else if (c == '+' || c == '-')
   {
      return 1;
   }
   else
   {
      return -1;
   }
}

string InfixToPostfix(string chk)
{
   Stack<char> st;
   string result;
   for (int i = 0; i < chk.length(); i++)
   {
      if (chk[i] >= '0' && chk[i] <= '9')
      {
         result += chk[i];
      }

      else if (chk[i] == '(') // opening braket
      {
         st.Push(chk[i]);
      }

      else if (chk[i] == ')') // closing braket
      {
         while (!st.empty() && st.Top() != '(')
         {
            result += st.Pop();
         }
         if (!st.empty())
         {
            st.Pop();
         }
      }

      else
      {
         while (!st.empty() && precisionCalc(st.Top()) >= precisionCalc(chk[i]))
         {
            result += st.Pop();
         }
         st.Push(chk[i]);
      }
   }
   while (!st.empty())
   {
      result += st.Pop();
   }
   return result;
}

int PostfixEvaluation(string chk)
{
   Stack<int> st;
   for (int i = 0; i < chk.length(); i++)
   {
      if (chk[i] >= '0' && chk[i] <= '9')
      {
         st.Push(chk[i] - '0'); // to remove ascii value
      }
      else
      {
         // Only for postfix:
         int b = st.Pop();
         int a = st.Pop();

         switch (chk[i])
         {
         case '+':
            st.Push(a + b);
            break;

         case '-':
            st.Push(a - b);
            break;

         case '*':
            st.Push(a * b);
            break;

         case '/':
            st.Push(a / b);
            break;

         case '^':
            st.Push(pow(a, b));
            break;

         default:
            break;
         }
      }
   }
   return st.Top();
}

int main()
{

   string infix = "(5*((6^2)+(7-(2/6))))-((7*(8+1))+(5*4))"; //"(4*(3+5))-(2+0)"; //(5*(5+5))/(5+5) //(4*(3+5))-(2+0)
   string Postfix;
   Postfix = InfixToPostfix(infix);
   cout << Postfix << endl
        << PostfixEvaluation(Postfix) << endl;
   return 0;
   /*
   (5*((6^2)+(7-(2/6))))-((7*(8+1))+(5*4))
   */
}