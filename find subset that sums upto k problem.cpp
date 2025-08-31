// Combination Sum I
// find subset that sums upto k problem 
//same element also can be used as many times a possible
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
  int l=0;
  if(k-v1[i]>=0){
     currSelection.push_back(v1[i]);
    l=findSubsets(v1,i,k-v1[i],currSelection); //pick
    //pick the same element 2 or more times to get results like {2,2,3} ;;;;;
  currSelection.pop_back();

  }
 
  int r=findSubsets(v1,i+1,k,currSelection); // not pick

  return l+r;
}

int main() {
 
  vector<int>v1={5,1};
  int k=15;
  int sol=findSubsets(v1,0,k,{});
  cout<<endl<<"Total Subsets="<<sol;
 
  return 0;
}