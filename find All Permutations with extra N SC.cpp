// findAllPermutations
// Find the sum of all possible subsets and in increasing order.
//using extra space to store the indexes that are taken as taken vector.
#include <bits/stdc++.h>
using namespace std;
 
void findAllPermutations(vector<int>&arr,vector<int>taken,vector<int>currSelection,vector<vector<int>>&res){
  if(currSelection.size()==arr.size()){
    res.push_back(currSelection);
    return;
  }
  for(int i=0;i<taken.size();i++){
    if(!taken[i]){
      currSelection.push_back(arr[i]);
      taken[i]=1;
      findAllPermutations(arr,taken,currSelection,res);
      currSelection.pop_back();
      taken[i]=0;
    }
  }
  return;
}


int main() {
  vector<int>v1={1,2,3};
  vector<vector<int>>res;
  vector<int>taken(v1.size(),0);
  findAllPermutations(v1,taken,{},res);
  for(int i=0;i<res.size();i++){
    cout<<'[';
    for(int j=0;j<res[i].size();j++){
      cout<<res[i][j];
      if(j!=res[i].size()-1)cout<<' ';
    }
    cout<<']';
  }
  // for(int i=0;i<taken.size();i++)
  // cout<<taken[i];
 
  return 0;
}