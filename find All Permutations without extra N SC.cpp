// findAllPermutations
// Find the sum of all possible subsets and in increasing order.
//without using extra space to store the indexes that are taken as taken vector.
#include <bits/stdc++.h>
using namespace std;
 
void findAllPermutations(vector<int> arr,int index,vector<vector<int>>&res){
  if(index==arr.size()){
    res.push_back(arr);
    return;
  }
  for(int i=index;i<arr.size();i++){
   
    swap(arr[i],arr[index]);
    findAllPermutations(arr,index+1,res);
    swap(arr[i],arr[index]);
    

  }
  return;
}


int main() {
  vector<int>v1={1,2,3};
  vector<vector<int>>res;
  findAllPermutations(v1,0 ,res);
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