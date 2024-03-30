// count subarray sum equal to k 

// TC: nlong

#include <bits/stdc++.h>
using namespace std;

int subarray_sum(vector <int> v1, int n, int k){
  int cnt=0;
  int prefix_sum=0;
  map <int,int> mpp;
  mpp[0]=1;
  for(int i=0;i<n;i++){
    prefix_sum+=v1[i];
    mpp[prefix_sum]=mpp[prefix_sum]+1;
    cnt+=mpp[prefix_sum-k];
  // cout<<cnt<<" "<<mpp[prefix_sum]<<endl;
  }
//   for( auto i : mpp){
//     cout<<i.first<<" "<<i.second;
//     cout<<endl;
// }
  return cnt;

} 


int main() {
 
  vector <int> v1={1 ,2 ,3};
  int k=3;
  cout<<subarray_sum(v1,v1.size(),k);

 
  return 0;
}