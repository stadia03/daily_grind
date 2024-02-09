// print-all-the-duplicates-in-the-input-string


#include <bits/stdc++.h>
using namespace std;
 

void duplicate(string str){


  unordered_map <char,int> count;

  for (int i=0;i<str.length();i++){
    count[str[i]]++;

  }

  for(auto  x:count) {
   
    if(x.second >1 )
      cout << x.first << " count is "<<x.second<<"\n";

   
     }

}



int main() {
 
  string str;
  cin>>str;
  duplicate(str);
 
  return 0;
}