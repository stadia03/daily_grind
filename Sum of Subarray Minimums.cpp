
// 907. Sum of Subarray Minimums



#include <bits/stdc++.h>
using namespace std;
 


class Solution {
public:
    vector<int> nxtSmallerElement(vector<int>&arr){
      int n= arr.size();
            vector<int>res(n);
            stack<int>st;
            for(int i=n-1;i>=0;i--){
                while(!st.empty() && arr[st.top()] >= arr[i] ){st.pop();}

                if(st.empty()){
                    res[i]=n;
                   
                }else{
                  res[i]=st.top();
        
                }
                 st.push(i);

            }
            return res;
    }
    vector<int> prevSmallerElementOrEqual(vector<int>&arr){
      stack<int>st;
      int n=arr.size();
      vector<int>res(n);
      for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]> arr[i] ){st.pop();}

        if(st.empty()){
          res[i]=-1;

        }else{
          res[i]=st.top();
        }

        st.push(i);
      }
      return res;
    }
    int sumSubarrayMins(vector<int>& arr) {
        const int MOD = 1e9 +7;
        vector<int>nse=nxtSmallerElement(arr);
        vector<int>psee=prevSmallerElementOrEqual(arr);
        long long res=0;
        for(int i=0;i<arr.size();i++){
          int pseeCnt=i-psee[i];
          int nseCnt = nse[i]-i;

          res= (res+ long long(arr[i]) * pseeCnt % MOD * nseCnt % MOD)%MOD;
        }
        return res;
    }
};


int main() {
  vector<int>arr={71,55,82,55};
  int n=arr.size();
  vector<int>res;
  Solution sol;
  res=sol.prevSmallerOrEqual(arr);
  for(int i =0;i<n;i++)
      cout<<res[i];
 
  return 0;
}