//Leetcode Hard
// Largest rectangle in matrix with '1's

#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:

    int largestReactangleInHistogram(vector<int>&heights){

      stack<int>st;
      int maxArea=0;
      int n=heights.size();
      int pse;
      for(int i=0;i<n;i++){
        
            while(!st.empty() && heights[st.top()]>heights[i]){
              int elementIndex=st.top();
              st.pop();
              if(st.empty())
                pse=-1;
              else
                pse=st.top();
              maxArea=max(maxArea,heights[elementIndex]*(i-pse-1));
            }
          
           st.push(i);
        
      }
      
      while(!st.empty()){
        int elementIndex=st.top();
        st.pop();
        if(st.empty())
          pse=-1;
        else
          pse=st.top();
        maxArea=max(maxArea,heights[elementIndex]*(n-pse-1));
      }
      return maxArea;
    }



   int maximalRectangle(vector<vector<char>>& matrix) {
    if (matrix.empty() || matrix[0].empty()) return 0;

      int maxArea=0;
      int n=matrix.size();
      int m=matrix[0].size();
      vector<vector<int>>prefixSumMatrix(n,vector<int>(m,0));
      
      for(int i=0;i<n;i++){
        
        for(int j=0;j<m;j++){
          if(!i){
            prefixSumMatrix[i][j]=matrix[i][j]-'0';
            continue;
          }
          if(matrix[i][j]=='0'){
            prefixSumMatrix[i][j]=0;
            continue;
          }
          prefixSumMatrix[i][j]=prefixSumMatrix[i-1][j]+(matrix[i][j]-'0');
        }
      }

      for(int i=0;i<n;i++){
        maxArea=max(maxArea,largestReactangleInHistogram(prefixSumMatrix[i]));
      }
      
      
       return maxArea;
    }

   
};


int main() {
 
  vector<vector<char>> matrix = {
    {'1', '0', '1', '1', '0'},
    {'1', '1', '1', '1', '1'},
    {'1', '1', '0', '1', '1'},
    {'1', '0', '0', '1', '0'}
};
  Solution sol;

  cout<<sol.maximalRectangle(matrix);
 
  return 0;
}