// quick sort
// TC: O(nlogn)   SC: O(1) doesn't use any other temp array.. 
// thats why better then merge sort

#include <bits/stdc++.h>
using namespace std;



int quick_part(int arr[],int low,int high){

  int pivot= arr[low];
  int i=low;
  int j=high;
  while(i<j){
    while(arr[i]<=pivot && i<=high){
      i++; //run the i until a bigger number then pivot is found 
    }
    while(arr[j]>pivot && j>=low)
      j--;
    
   if(i<j) swap(arr[i],arr[j]);
  }
  swap(arr[j],arr[low]);
    return j;
}

 
void quick_sort(int arr[],int low, int high ){
  if(low<high){
    int partition= quick_part(arr,low,high);
    quick_sort(arr,low,partition-1);
    quick_sort(arr,partition+1,high);
  }
}

int main() {
 
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++)
  cin>>arr[i];

quick_sort(arr,0,n-1);


for(int i=0;i<n;i++)
  cout<<arr[i]<<" ";
 
  return 0;
}