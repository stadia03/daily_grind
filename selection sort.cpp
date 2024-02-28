//selection sort

#include <bits/stdc++.h>
using namespace std;
 
void selection_sort(int  arr[], int n){
  int min=arr[0],min_index=0,flag=0;

  for(int i=0;i<n;i++){
   min=arr[i];
   flag=0;
    for(int j=i;j<n;j++){
      
      if(arr[j]<min){
      min=arr[j];
      min_index=j;  
      flag=1;
      }
       
      
    }
   if(flag){
    int temp=arr[i];
    arr[i]=arr[min_index];
    arr[min_index]=temp;      
   }
    
    
     
  }
}

int main() {
 
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  selection_sort(arr,n);
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
 
  return 0;
}