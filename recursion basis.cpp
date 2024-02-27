//recursion basis

#include <bits/stdc++.h>
using namespace std;
 
int ONE_recursion(int n){
  if(n==0)
    return 0;
  else {
    cout<<"Gaurab"<<"\n";
    n--;
  }
  // recursion(n);
  return 1;
}


int backtrack_Nto1(int i,int n){
  if(i==n)
    return 0;
  else{
    i++;
    // backtrack_Nto1(i,n);
    cout<<i<<" ";
    return 1;
  }
}


int functional_addition(int i){
    if(i==1)
    return 1;
    // else return i+functional_addition(i-1);
}

int main() {
 
  //  recursion(5);
  // backtrack_Nto1(0,5);
  // cout<<functional_addition(3);

  return 0;
}



