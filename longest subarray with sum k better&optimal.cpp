// better sol TC: O(N logN)  SC: O(N)



#include <bits/stdc++.h>
using namespace std;

void subarray_better(int arr[],int n,int k){

  map <long long,long long> sums;
  long long sum=0;
  long long max_len=0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
    

    if(sum==k)
      max_len=i+1;
    
    long long rem=sum-k;
    if(sums.find(rem)!=sums.end())
        max_len=max(max_len, (i-sums[rem]));

    if(sums.find(sum)==sums.end()) 
      sums[sum]=i;  //storing the sum till i into hash map   
  }
  cout<<"Max subarray length: "<<max_len<<'\n';
}

void subarray_optimal(int arr[],int n,int k){
  int i=0,j=0;
  int max_len=0;
  long long sum=0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
    
    while(sum>k && j<=i)
      {
       
        sum-=arr[j];
         j++;
      }
      if(sum==k)
      max_len=max(max_len,(i-j)+1);
  }
  cout<<"Max subarray length: "<<max_len<<'\n';
}

int main() {
 
  int n;
  cin>>n;
  int arr[n];

  for(int i=0;i<n;i++)
      cin>>arr[i];

  cout<<"Enter k:";
  long long k;
  cin>>k;
  // subarray_better(arr,n,k);
  //brooo, I did the subarray_better in one go. Literally ZERO error and all corner case passed.

  subarray_optimal(arr,n,k);
  return 0;
}