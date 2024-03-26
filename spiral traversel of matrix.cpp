

#include <bits/stdc++.h>
using namespace std;
 
void spiral_traversel(vector<vector<int>>matrix,int m,int n){
  int top=0,bottom=m-1,left=0,right=n-1;

  while(left <= right && top <= bottom){
      
  for(int j=left;j<=right;j++)
      cout<<matrix[top][j]<<" ";

  top++;

  for(int i=top;i<=bottom;i++)
    cout<<matrix[i][right]<<" ";

  right--;

  if (  top <= bottom) {
      for (int j = right; j >= left; j--)
          cout<<matrix[bottom][j]<<" ";
      bottom--;
  }


  for(int i=bottom;i>=top;i--)
    cout<<matrix[i][left]<<" ";

  left++;

  }

}


int main() {
 int m,n;
  cin>>m>>n;

  vector<vector<int>> matrix(m,vector<int>(n));

  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++)
      cin>>matrix[i][j];
  }

  spiral_traversel(matrix,m,n);
 
  return 0;
}