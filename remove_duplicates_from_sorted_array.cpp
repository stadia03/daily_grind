#include <bits/stdc++.h>
using namespace std;
 
int removeDuplicates(vector<int>& nums) {
            
    int prev=nums[0];

    int k=0;
    for(int i=1;i<nums.size();i++){
        if(nums[i]!=prev){
            prev=nums[i];
            k++;
            nums[k]=nums[i];
        }
    }


    return k+1;
    }

int main() {
 

  // vector <int> nums={0,0,1,1,1,2,2,2,3,3,4};
  vector <int> nums={1,1,2};
  cout<<removeDuplicates(nums);

  for(int i=0;i<nums.size();i++)
    cout<<nums[i]<<" ";
 
  return 0;
}