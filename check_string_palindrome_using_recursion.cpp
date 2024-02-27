// string palindrome checker using recursion

#include <bits/stdc++.h>
using namespace std;
 
int recursive_palindrome_checker(string str,int i,int l){
  
  if(tolower(str[i])!=tolower(str[l-i-1]))
    return 0;
  else{
    recursive_palindrome_checker(str,i+1,l);
  }
  return 1;

}

 
int main() {
 
  string str;
  cin>>str;
  // str="";
  int len=str.length();
  cout<<recursive_palindrome_checker(str,0,len)<<endl;
 
  return 0;
}