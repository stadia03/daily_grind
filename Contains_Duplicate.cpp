//Contains_Duplicate

#include <bits/stdc++.h>
using namespace std;
 
bool containsDuplicate(vector<int>& nums) {
    unordered_set <int> seen ;
        for (int i = 0; i < nums.size(); i++) {
            
            if(seen.find(nums[i])!= seen.end())
                  return true;
            else
              seen.insert(nums[i]);
        }
        // auto it = seen.find(1);
        // cout<< *it;
        return false;
    }

int main() {
 
  vector <int> nums={1,2,3,5,67,8,6,5,5};
  cout<<containsDuplicate(nums);
 
  return 0;
}