//For unordered map average and best case can be O(1) but worst case can be O(n^2)
//For ordered map TC: O(logN)
//SC: O(N)
#include <bits/stdc++.h>

using namespace std;

void two_sum_better(int arr[],int n ,int k){

  map <int,int> mp;
  int flag=0;
  for(int i=0;i<n;i++)
    {
     
      mp[arr[i]]=i;
      int rem= k-arr[i];
      if(mp.find(rem)!=mp.end() && mp[rem] != i ){
        cout<<i<<" "<<mp[rem];
        flag=1;
        break;}
    }
    if(!flag)
      cout<<"NOT FOUND";
  }

void two_sum_optimal(int arr[],int n,int k){
  int i=0;
  int j=n-1;
  int flag=0;
  sort(arr,arr+n);
  
  while(i<j && j<n){
    if(arr[i]+arr[j]==k)
      {
        cout<<i<<" "<<j;
        
        flag=1;
        break;
      }
    if(arr[i]+arr[j]<k)
      i++;
    if(arr[i]+arr[j]>k)
      j--;
    
  }
  if(!flag)
    cout<<"NOT FOUND";
}


int main() {
 
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  cout<<"Enter sum:";
  int sum;
  cin>>sum;
  // two_sum_better(arr,n,sum);
  two_sum_optimal(arr,n,sum);
 
  return 0;
}