#include <bits/stdc++.h>
using namespace std;

void markrow(vector<vector<int>>& matrix,int i,int m){
    for(int x=0;x<m;x++)
    {
      if(matrix[i][x]!=0)
        matrix[i][x]=-1;
    }
}

void markcolumn(vector<vector<int>>& matrix,int j,int n){
    for(int x=0;x<n;x++)
    {
      if(matrix[x][j]!=0)
        matrix[x][j]=-1;
    }
}

// TC: O(NxM) x O(N+M) + O(NxM) near about O(n^3)
//SC: O(1)
vector<vector<int>> Zeromatrix_brute(vector<vector<int>>& matrix,int n,int m){
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(matrix[i][j]==0)
        {
          markrow(matrix,i,m);
          markcolumn(matrix,j,n);
        }
    }
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(matrix[i][j]==-1)
        matrix[i][j]=0;
    }
  }
return matrix;
}


// TC: O(2xNxM)
// SC: O(N)+O(M)
vector <vector<int>> Zeromatrix_better(vector<vector<int>>&matrix,int n,int m){
 
  vector<int> row(n, 0); // initialize row vector with size n and all elements set to 0
  vector<int> column(m, 0); 
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(matrix[i][j]== 0)
      {
        row[i]=row[i]+1;
        column[j]=column[j]+1;
      }
    }
  }

   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(row[i]>0 || column[j]>0)
      {
        matrix[i][j]=0;
        }
    }
  }

return matrix;

}

vector <vector<int>> Zeromatrix_optimal(vector<vector<int>>&matrix,int n,int m){

  int col0=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(matrix[i][j]==0){
        if(j==0)
          {
            col0=-1;
            matrix[i][0]=-1;
          }
          else{
            matrix[0][j]=-1;
            matrix[i][0]=-1;
          }
      }
    }
  }

  for(int i=1;i<n;i++){
    for(int j=1;j<m;j++){
      if(matrix[i][0]==-1 || matrix[0][j]==-1)
        matrix[i][j]=0;
    }
  }

  for(int j=1;j<m;j++){
      if(matrix[0][0]==-1 || matrix[0][j]==-1)
        matrix[0][j]=0;
  }

  for(int i=0;i<n;i++){
    if(col0==-1 || matrix[i][0]==-1)
      matrix[i][0]=0;
  }
  return matrix;
}
 


int main() {
 
  int n,m;
  cin>>n>>m;

  
  vector<vector<int>> matrix(n, vector<int>(m)); // Resizing matrix with n rows and m columns


  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>matrix[i][j];
    }
  }

  // Zeromatrix_brute(matrix,n,m);
  // Zeromatrix_better(matrix,n,m);
  Zeromatrix_optimal(matrix,n,m);

 
   for(int i=0;i<n;i++){
   
    for(int j=0;j<m;j++){
      cout<<matrix[i][j]<<" ";
    }
     cout<<'\n';
  }

  return 0;
}