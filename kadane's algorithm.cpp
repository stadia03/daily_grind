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

void max_sub_sum_print(vector <int> v)
{
  long long  max_sum=INT_MIN;
  long long curr_sum = 0;
  int i=0;
  int j=0;
  for(int x=0;x<v.size();x++){
    curr_sum+=v[x];

    if(curr_sum>max_sum){
      max_sum=curr_sum;
      j=x;
    }
    if(curr_sum<0){
      curr_sum=0;
      i=x+1;
    }
  }
  if(max_sum<=0)
    max_sum=0;
  else{
      for(int x=i;x<=j;x++)
    cout<<v[x]<<" ";
  }
  
  cout<<'\n'<<max_sum;
}
int main() {
 
  vector <int> v1={-7, -8 ,-16, -4 ,-8, -5, -7 ,-11,-10, -12, -4, -6 ,-4 ,-16  };
  // cout<<max_sub_sum(v1,v1.size());
  //print the sub array also then. 
  max_sub_sum_print(v1);
 
  return 0;
}