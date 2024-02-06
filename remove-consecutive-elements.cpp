#include <bits/stdc++.h>


using namespace std;
 

string removeConsecutiveCharacter(string s)
    {
        string res = "";
        res.push_back(s[0]);
        for(int i=1;i<s.length();i++)
        {
          if(s[i]!=s[i-1])
            res.push_back(s[i]);


        }
        return res;
    }

int main() {
  
  string s;
  cin>>s;
  cout<<removeConsecutiveCharacter(s);

 
  return 0;
}