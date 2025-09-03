// Suduko solver
#include <bits/stdc++.h>
using namespace std;
 
bool isSafe(vector<vector<char>>&board,char c, int char_i,int char_j){
  
  for(int i=0;i<9;i++){
    if(board[i][char_j]==c)return false;
    if(board[char_i][i]==c)return false;

    if(board[(char_i/3*3)+(i%3)][(char_j/3*3)+(i%3)]==c)return false;
  }

  return true;


}

bool solveSudoku(vector<vector<char>>&board){
   for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){
      if(board[i][j]=='.'){
        for(char c='1';c<='9';c++){
          if(isSafe(board,c,i,j)){
            board[i][j]=c;
            if(solveSudoku(board))return true;
            else board[i][j]='.';
          }
          
        }
        return false;
      }
    }
   }
   return true;

}



int main() {
 
    vector<vector<char>>board{
        {'9', '5', '7', '.', '1', '3', '.', '8', '4'},
        {'4', '8', '3', '.', '5', '7', '1', '.', '6'},
        {'.', '1', '2', '.', '4', '9', '5', '3', '7'},
        {'1', '7', '.', '3', '.', '4', '9', '.', '2'},
        {'5', '.', '4', '9', '7', '.', '3', '6', '.'},
        {'3', '.', '9', '5', '.', '8', '7', '.', '1'},
        {'8', '4', '5', '7', '9', '.', '6', '1', '3'},
        {'.', '9', '1', '.', '3', '6', '.', '7', '5'},
        {'7', '.', '6', '1', '8', '5', '4', '.', '9'}
    };
 
  if(solveSudoku(board)){
     for(int i=0;i<9;i++){
    for(int j=0;j<board[i].size();j++){
      cout<<board[i][j]<<" ";
    }
    cout<<endl;
  }
  }else {
    cout<<"No possible solution!";
  }
  return 0;
}