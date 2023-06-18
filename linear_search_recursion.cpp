#include <bits/stdc++.h>
using namespace std;
 vector <int> v1;
int n,user,key;
 int linear_search(int i=0){
     if(i==n)
      {
        cout<<"not found";
        exit(1);
      }
    if(key==v1[i])
      return i;
    linear_search(i+1);
    
 }
int main() {
 
 
  
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>user;
    v1.push_back(user);
  }
  cin>>key;
  cout<<linear_search();
  


  return 0;
}