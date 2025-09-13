// Trapping Rain Water
// SC O(N) and O(1)
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int trap(vector<int>& height){
      int n= height.size();
      int l=0,r=n-1;
      int max_l_val=INT_MIN,max_r_val=INT_MIN;
      int curr=l;
      int water=0;
      while(l<r){
        if(height[curr] < max_l_val && height[curr] < max_r_val){
          water+=min(max_l_val,max_r_val)-height[curr];
        }

          if(height[l]<height[r]){
            l++;
            curr=l;
            max_l_val=max(max_l_val,height[l]);
            
          }else{
            r--;
            curr=r;
            max_r_val=max(max_r_val,height[r]);
           
          }
        
      }
      return water;
    }
};

class Solution2 {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> left_height(n);
        int max_left_height=0;
        for(int i=0;i<n;i++){
          max_left_height=max(max_left_height,height[i]);
          left_height[i]=max_left_height;
        }
        int water=0;
        int max_right_height=0;
        for(int i=n-1;i>=0;i--){
          if(height[i]<left_height[i] && height[i]<max_right_height){
            water+=min(max_right_height,left_height[i])-height[i];
          }else{
            max_right_height=max(max_right_height,height[i]);
          }
        }
        return water;
    }

};


int main() {
 
  vector<int> height= {0,1,5,4,3,2,7,1};
  Solution sol;

  cout<<"Total water stored:"<<sol.trap(height);
 
  return 0;
}
