#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int celebrityShortcut(vector<vector<int>>&mat){
      int n= mat.size();
      int top=0;
      int bottom = n-1;

      while(top<bottom){
        if(mat[top][bottom])
          top++;
        else if(mat[bottom][top])
          bottom--;
        else{
          top++;
          bottom--;
        }
      }
      if(top>bottom)return -1;
      int popularity=0;
      for(int j=0;j<n;j++){
        if(top==j)continue;
        if(mat[top][j]==1)return -1;
        if(mat[j][top]==1)popularity++;
      }
      if(popularity==n-1)return top;
      else return-1;
    }

    int celebrity(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        int top=0;
        int bottom=n-1;
        
        while(top<bottom){
            int popularity=0;
            int iKnow=0;
            for(int j=0;j<n;j++){
                if(top==j)continue;
                if(mat[j][top]==1)popularity++;
                if(mat[top][j]==1)iKnow++;
            }
            if(popularity==n-1 && iKnow==0)
                return top;
            else
                top++;

              popularity=0;
              iKnow=0;
            for(int j=0;j<n;j++){
              if(bottom==j)continue;
              if(mat[j][bottom]==1)popularity++;
              if(mat[bottom][j]==1)iKnow++;
            }
            if(popularity==n-1 && iKnow==0)
                return bottom;
            else
                bottom--;

        }
        if(top>bottom)return -1;
           int popularity=0;
            int iKnow=0;
        for(int j=0;j<n;j++){
                if(top==j)continue;
                if(mat[j][top]==1)popularity++;
                if(mat[top][j]==1)iKnow++;
            }
        
          if(popularity==n-1 && iKnow==0)
                return top;
            else
                return -1;
    }

    
};


int main() {
 
  vector<vector<int>>mat={{1, 1, 1},
                          {0, 1 ,0},
                          {1, 0, 1}};
 Solution sol;
 cout<<sol.celebrity(mat);
 cout<<sol.celebrityShortcut(mat);
  return 0;
}