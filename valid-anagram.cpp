// Given two strings s and t, return true if t is an anagram of s, and false otherwise.
// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

#include <bits/stdc++.h>
using namespace std;
 
 bool isAnagram(string s, string t) {
     
        sort(s.begin(),s.end());
        
        sort(t.begin(),t.end());
           if(s==t)
          return  true;


        return false;
    }


int main() {
 
  string s,t;
  cin>>s>>t;
  cout<<isAnagram(s,t);
  cout<<"Executed";
  return 0;
}