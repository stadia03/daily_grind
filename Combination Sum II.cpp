// Combination Sum II 
// to find subset in sorted order , 
// which sums upto k but each element can be used once.

#include <bits/stdc++.h>
using namespace std;
 
void findSubsets(vector <int>v1,int index,int k, vector<int>currSelection,vector<vector<int>>&res){
    if(!k){
      res.push_back(currSelection);
      return ;
    }
    if(index>=v1.size())return;
    int prev=INT_MAX;
    for(int i=index;i<v1.size();i++){
      if(v1[i]==prev)continue;
      if(k-v1[i]<0)break;
      currSelection.push_back(v1[i]);
      findSubsets(v1,i+1,k-v1[i],currSelection,res);
      prev=v1[i];
      currSelection.pop_back();
    }
    return;
}


int main() {
 
  vector<int>v1={1,1,1,2,2};
  int k=4;
  vector<vector<int>>res;
  findSubsets(v1,0,k,{},res);
  for(int i=0;i<res.size();i++){
    cout<<'[';
    for(int j=0;j<res[i].size();j++){
      cout<<res[i][j];
      if(j+1!=res[i].size())cout<<" ";
    }
    cout<<']';
  }
  
 
  return 0;
}