#include <bits/stdc++.h>
using namespace std;


int parity_checker(int a,int b){
  if((a%2==0 && b%2==0 )|| (a%2!=0 && b%2!=0))
  return 1;
else return 0;
}


string swapparity(string num){
  int start=0;
  for(int i=0;i<num.size()-1;i++){
    if(!parity_checker(num[i],num[i+1])){
      sort(num.begin()+start,num.begin()+i+1,greater<int>());
      start=i+1;
    }

  }
   sort(num.begin()+start,num.end(),greater<int>());
   return num;
}


int main() {
 
  string str;
  cin>>str;
  cout<<swapparity(str);
 
  return 0;
}