//kadane's algorithm for maximum subarray sum

#include <bits/stdc++.h>
using namespace std;
 
long long max_sub_sum(vector <int> arr,int n)
{
  
  long long max_sum=INT_MIN;
  long long curr_sum=0;
  for(int i=0;i<n;i++){
    curr_sum+=arr[i];
    max_sum=max(max_sum,curr_sum);
    if(curr_sum<0)
      curr_sum=0;

    
  }
  if(max_sum<0)
    max_sum=0;
  return max_sum;
}
int main() {
 
  vector <int> v1={1, 2, 7, -4, 3, 2, -10, 9, 1};
  cout<<max_sub_sum(v1,v1.size());
 
  return 0;
}