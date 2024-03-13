// Problem statement: Find the element having frequency > n/2
//if guaranteed, element with freq >n/2 present then TC: O(n) remove the verification line
// otherwise add the extra verification loop for checking and that gives us an TC: O(2N) still better than O(nlogn)
//SC:O(1) in optimal solution 


#include <bits/stdc++.h>
using namespace std;

int moore_alg(int arr[],int n){

  int max_ele=arr[0];
  int point=0;
  for(int i=1;i<n;i++){
    if(!point){
      max_ele=arr[i];
      point++;
    }
      
    else if(arr[i]==max_ele)
      point++;
    else  
      point--;
  }
  point=0;
  for(int i=0;i<n;i++){
    if(arr[i]==max_ele)
      point++;
  }
  if(point>n/2)
    return max_ele;
  else  
    return -1;
}

int main() {
 
  int arr[]={2, 2, 1, 3, 1, 1, 3, 1, 1};
  int n=sizeof(arr)/sizeof(int);
  int ele=moore_alg(arr,n);
  cout<<ele;
 
  return 0;
}