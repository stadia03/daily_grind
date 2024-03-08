// find the missing number using XOR

#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  int n=5;
  int arr[]={2,4,3,5};

  int xor1=0,xor2=0;  //XOR of same number is always 0 

  for(int i=0;i<n;i++){
    xor1=xor1 ^ (i+1); 
    xor2=xor2 ^ arr[i];  //XORing all the elements of array
  }
  xor1=xor1 ^ n; //to include last number, as it is not covered by loop 

  cout<<(xor1 ^ xor2);  //XOR of any num with 0 is num itself
 
  return 0;
}