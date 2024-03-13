//Dutch National Flag algorithm

//TC: O(n) SC:O(1)


#include <bits/stdc++.h>
using namespace std;
 
void DNFA_sort(int arr[],int n){
  int low=0;
  int mid=0;
  int high=n-1;
  while(mid<=high){
    
    if(arr[mid]==0){
      swap(arr[mid],arr[low]);
      low++;mid++;
    }
    else if(arr[mid]==1){
      mid++;
    }
    else{
      swap(arr[mid],arr[high]); 
      high--;
    }
    
  }
}

int main() {
 
  
  int arr[]={2 ,2 ,2 ,2 ,0 ,0 ,1 ,0};
  int n=sizeof(arr)/sizeof(int);
  DNFA_sort(arr,n);
  for(int i=0;i<n;i++)
    cout<<arr[i];
  return 0;
}