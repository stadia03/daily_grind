#include <bits/stdc++.h>
using namespace std;
 
int recursion_reverse(int arr[],int i,int j){
  if(i>j)
    return 0;
  else{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;j--;
    recursion_reverse(arr,i,j);
  }
  return 1;
}



int main() {
 
  int arr[5]={1,2,3,4,5};
  int i=0,j=4;
  recursion_reverse(arr,i, j);
  for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }
 
  return 0;
}