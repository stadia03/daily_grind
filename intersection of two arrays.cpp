// intersection of two sorted array using two pointers
//TC: O(n1+n2)  SC: O(n1+n2)
#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  int n1,n2;
  cin>>n1>>n2;
  int arr1[n1],arr2[n2];
  for(int i=0;i<n1;i++)
    cin>>arr1[i];
  for(int i=0;i<n2;i++)
    cin>>arr2[i];
 
  //  for(int i=0;i<n1;i++)
  //   cout<<arr1[i];
  //   cout<<endl;
  // for(int i=0;i<n2;i++)
  //    cout<<arr2[i];
  int i=0,j=0;
  vector <int> v1;
  while(i<=n1 && j<=n2){
    // cout<<arr1[i]<<arr2[j]<<endl;
    if(arr1[i]<arr2[j])
      i++;
        
    else if(arr1[i]>arr2[j])
        j++;
    else{
      v1.push_back(arr1[i]);
        i++;j++;
    }
      
    }
    
      
  
// cout<<v1.size();
  for(int i=0;i<v1.size();i++)
    cout<<v1[i]<<" ";
  return 0;
}