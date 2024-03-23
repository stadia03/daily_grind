

#include <bits/stdc++.h>
using namespace std;

int longestSuccessiveElements(vector<int>&a) {
    int n=a.size();
    sort(a.begin(),a.end());

    
    int Max=0,curr_max=1;
    for(int i=1;i<n;i++){
      if(a[i-1]+1==a[i]){
          curr_max++;
      }
      else{
        curr_max=1;
      }
      Max=max(Max,curr_max);
     
    }
    return Max;

    
}

int main() {
 
  vector <int>a={15, 6, 2, 1, 16, 4 ,2 ,29, 9, 12, 8 ,5 ,14, 21, 8, 12, 17, 16, 6 ,26, 3};
  cout<<longestSuccessiveElements(a);
 
  return 0;
}