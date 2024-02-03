#include <bits/stdc++.h>
using namespace std;
 

 bool isPalindrome(string str) {
        string nstr;
        for(int i=0;i<str.length();i++){
          if(str[i]>=97 &&  str[i]<=122 || str[i]>=65 &&  str[i]<=90)
            nstr.push_back(str[i]);
    }
      // if(nstr.length()==1 && str.length()!=1)
     // return 0;
    for(int i=0;i<nstr.length()/2;i++){
      if(tolower(nstr[i])!=tolower(nstr[nstr.length()-i-1])){
        // cout<<"str["<<i<<"] = "<<str[i]<<" str[str.length()-i-1]="<<str[str.length()-i-1]<<" ";
        //  cout<<str[2]; 
          return 0;
      }
        

    }
    
    return 1;
    }

int main() {
 
  string str;
  getline(cin,str);
  cout<<isPalindrome(str);
 
  return 0;
}