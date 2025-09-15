// Leetcode Hard
// 239. Sliding Window Maximum

#include <bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        int n=nums.size();
        vector<int>res;

        for(int i=0;i<n;i++){
            if(!dq.empty() && dq.front()<=i-k)dq.pop_front();
          while(!dq.empty() &&  nums[i] > nums[dq.back()]){
            dq.pop_back();
          }
          dq.push_back(i);
          
         if(i>=k-1)res.push_back(nums[dq.front()]);
          
        }
      

        
      return res;
    }
};


int main() {
  
  vector<int>nums={1,3,-1,-3,5,3,6,7};
  int k=3;
  Solution sol;
  vector<int>res=sol.maxSlidingWindow(nums,k);
  for(int i=0;i<res.size();i++)
    cout<<res[i]<<" ";
 
  return 0;
}