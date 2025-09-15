// LeetCode Hard
// Largest Rectangle in histrogram
//Easiest way is to first compute nse and pse and save it then 
// iterate over the array and compute the largest rectangle 
// possible from each index. But that will take upto 
// TC: O(5N) & SC: O(2N) + O(2N)
// But here I solve it using  TC: O(N) and SC: O(N)

#include <bits/stdc++.h>
using namespace std;
 

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack <int>st;
        int maxArea=0;
        int n=heights.size();
        for(int i=0;i<n;i++){
            if(st.empty()){
                st.push(i);
                continue;
            }
            while(!st.empty() && heights[st.top()]>heights[i]  ){
               
                int elementIndex=st.top();
                st.pop();
                int pse;
                if(st.empty())
                    pse=-1;
                else
                    pse=st.top();
              
                maxArea=max(maxArea,heights[elementIndex]*(i-pse-1));
             
            }
             st.push(i);
             
        }
        int nse=n;
        while(!st.empty()){
               
                int elementIndex=st.top();
                st.pop();
                int pse;
                if(st.empty())
                    pse=-1;
                else
                    pse=st.top();
              
            maxArea=max(maxArea,heights[elementIndex]*(nse-pse-1));
             
        }
        return maxArea;
    }
};

int main() {
 
  vector <int>arr={2,4};
  Solution sol;

  cout<<sol.largestRectangleArea(arr);
 
  return 0;
}