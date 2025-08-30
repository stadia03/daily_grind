// find subset that sums upto k problem 

#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int>v1){
  cout<<"[";
  for(int i=0;i<v1.size();i++)
    cout<<v1[i]<<" ";
  cout<<"]";
}

int findSubsets(vector<int>v1,int i,int k,vector<int>currSelection){
  
  if(k<0 || i>=v1.size()){
    if(!k){
    printVector(currSelection);
    return 1;
  }else{
   return 0;
  }}
  currSelection.push_back(v1[i]);
  k-=v1[i];
  int l=findSubsets(v1,i+1,k,currSelection); //pick

  currSelection.pop_back();
  k+=v1[i];
  int r=findSubsets(v1,i+1,k,currSelection); // not pick

  return l+r;
}

int main() {
 
  vector<int>v1={3, 34, 4, 12, 5, 2};
  int k=9;
  int sol=findSubsets(v1,0,k,{});
  cout<<endl<<"Total Subsets="<<sol;
 
  return 0;
}