#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
  stack<char> stk;
  int n = s.length();
  for (int i = 0; i < n; i++)
  {
    if (s[i] == '(' || s[i] == '{' || s[i] == '[')
      stk.push(s[i]);
    else if (!stk.empty() && s[i] == ')' && stk.top() == '(')
      stk.pop();
    else if (!stk.empty() && s[i] == '}' && stk.top() == '{')
      stk.pop();
    else if (!stk.empty() && s[i] == ']' && stk.top() == '[')
      stk.pop();
    else
      return false;
  }
  return stk.empty();
}

int main()
{

  string brakets;
  cin >> brakets;
  cout << isValid(brakets);

  return 0;
}