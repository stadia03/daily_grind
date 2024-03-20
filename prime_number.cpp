#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
  int flag=1;
  for(int i=2;i<(n/2)+1;i++){
    if(n%i==0)
      {
        
        flag=0;
        break;
      }
  }
  if(flag)
    return 1;
  else  
    return 0;
} 

int main() {
 
  int n;
  cin>>n;
  cout<<isPrime(n);
 
  return 0;
}