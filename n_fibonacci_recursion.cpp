#include <bits/stdc++.h>
using namespace std;


int fibonaccii(int n){

  if(n<=1)
    return n;
  else 
  return fibonaccii(n-1)+fibonaccii(n-2);



}


int main() {
 
  int n;
 cin>>n;
 cout<<fibonaccii(n);
  return 0;
}