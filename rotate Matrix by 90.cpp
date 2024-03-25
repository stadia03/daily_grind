#include <bits/stdc++.h>
using namespace std;

// TC: O(n^2)
// SC: O(n^2)

vector<vector<int>> rotateMatrix_brute(vector<vector<int>>& matrix,int n,int m){
  vector<vector<int>> temp(n,vector<int>(m,0));
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      temp[i][m-(j+1)]=matrix[j][i];
    }
  }
  return temp;
}

// TC: O(n/2 * n/2) + O(n*n/2)
// SC: O(1) .
vector<vector<int>> rotateMatrix_optimal(vector<vector<int>>& matrix,int n,int m){

  // for getting transpose
  for(int i=0;i<n-1;i++){
      for(int j=i+1;j<m;j++){
        swap(matrix[i][j],matrix[j][i]);
      }
  }
  
  // for swapping each row

  for(int i=0;i<n;i++){
    reverse(matrix[i].begin(),matrix[i].end());
  }

  return matrix;
}

int main() {
 
  int n,m;
  cin>>n>>m;
  

  vector<vector<int>> matrix(n,vector<int>(m));
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>matrix[i][j];
    }
  }

  matrix= rotateMatrix_optimal(matrix,n,m);
  cout<<"\n";
  for(int i=0;i<n;i++){
   
    for(int j=0;j<m;j++){
      cout<<matrix[i][j]<<" ";
    }
     cout<<'\n';
  }

 
  return 0;
}