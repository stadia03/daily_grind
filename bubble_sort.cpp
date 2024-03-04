//bubble sort

#include <bits/stdc++.h>
using namespace std;
 
void bubble_sort(int arr[], int n, int  swaps) {

  for(int i=0;i<n-1;i++){
    // cout<<endl<<"i="<<i<<endl;
    bool flag = false;
    for(int j=0;j<n-1;j++){
      if(swaps){
        if(arr[j]>arr[j+1]){
          swap(arr[j+1], arr[j]);
          flag=1;
      }
    }
    else{
      if(arr[j]<arr[j+1]){
          swap(arr[j+1], arr[j]);
          flag=1;
      }
    }
    // for(int i=0;i<n;i++)
    // cout<<arr[i]<<" ";
    // cout<<" "<<arr[j]<<" "<<arr[j+1];
    // cout<<endl;
    
  }
   if(!flag)
      break;
}
}

int main() {
 
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];

// 1 for asc , 0 for desc
  bubble_sort(arr,n,1);

  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

 
  return 0;
}