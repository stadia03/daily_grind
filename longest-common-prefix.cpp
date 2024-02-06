#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &str)
{
  sort(str.begin(), str.end());
  string res = "";
  for (int i = 0; i < str.front().length(); i++)
  {
    if (str[0][i] == str[str.size() - 1][i])
      res.push_back(str[0][i]);
    else
      break;

    
  }return res;
}

int main()
{

  vector<string> str = {"flower", "flow", "flight"};
  cout << longestCommonPrefix(str);

  return 0;
}