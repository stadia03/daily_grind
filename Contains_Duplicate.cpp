//Contains_Duplicate

#include <bits/stdc++.h>


using namespace std;
 
bool containsDuplicate(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            cout << nums[i];
        }
        return true;
    }

int main() {
 
  vector <int> nums={1,2,3,1};
  cout<<containsDuplicate(nums);
 
  return 0;
}