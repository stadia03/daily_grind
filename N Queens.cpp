//N Queens

#include <bits/stdc++.h>
using namespace std;

bool isSafe(int row ,int col,vector<string>&board){
  int org_row=row;
  int org_col=col;
 
  while(row>=0 && col>=0){
   
    if(board[row][col]=='Q')return false;
     row--;col--;
  }
  row=org_row;
  col=org_col;
 
  while(row>=0){
   
    if(board[row][col]=='Q')return false;
     row--;
  }
  row=org_row;

  while(row<board.size() && col>=0){
    
    if(board[row][col]=='Q')return false;
    row--;col++;
  }
  return true;
}


void solveNQueen(int row,vector<string>&board,vector<vector<string>>&res){
  if(row==board.size()){
    res.push_back(board);
    // cout<<row<<endl;
    return;
  }

  for(int col=0;col<board.size();col++){
    if(isSafe(row,col,board)){
   //   cout<<"row="<<row<<"col="<<col<<endl;
      board[row][col]='Q';
      solveNQueen(row+1,board,res);
      board[row][col]='.';
    }
  }
  return;
}


int main() {
  
  int n=5;
  vector<vector<string>>res;
  vector<string>board(n);
  string s(n,'.');
  for(int i=0;i<n;i++){
    board[i]=s;
  }
  solveNQueen(0,board,res);
  // for(int i=0;i<board.size();i++){
  //   cout<<board[i]<<endl;
  // }
 for(int i=0;i<res.size();i++){
  for(int j=0;j<res[i].size();j++){
    cout<<res[i][j]<<endl;
  }
  cout<<endl;
 }
  return 0;
}