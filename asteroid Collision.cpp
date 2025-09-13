// asteroid Collision

#include <bits/stdc++.h>
using namespace std;
 

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
       
        
        for(int i=0;i<asteroids.size();i++){
            if(st.empty()){
                st.push(asteroids[i]);
                continue;}
            if((asteroids[i]>0 && st.top()>0) || (asteroids[i]<0 && st.top()<0))
            {
              st.push(asteroids[i]);
             
              continue;
            }
       
            while(!st.empty()){
             
               if((asteroids[i]>0 && st.top()>0) || (asteroids[i]<0 && st.top()<0))
            {
              st.push(asteroids[i]);
              break;
            }
            if( abs(st.top()) < abs(asteroids[i]) ){ 
                st.pop();
              }else if(abs(st.top()) > abs(asteroids[i])){ 
                break;
              }else{ 
                st.pop();
                break;
              }
            }
           
          }
            int n= st.size();
        
           vector<int>res(n);
           for(int i=n-1;i>=0;i-- ){
    
            res[i]=st.top();
            st.pop();
           }

           return res;
    }
};

int main() {
  vector<int>arr={-8,8};
  int n=arr.size();
  vector<int>res;
  Solution sol;
  res=sol.asteroidCollision(arr);
  for(int i =0;i<res.size();i++)
      cout<<res[i];
 
  return 0;
}