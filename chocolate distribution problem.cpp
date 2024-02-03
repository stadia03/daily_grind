// chocolate distribution problem

#include <bits/stdc++.h>
using namespace std;
 

int findMinDiff(int arr[], int n, int m){
  sort(arr, arr+n);
  int min= INT_MAX;
  for (int i=0;i+m-1<n;i++){
    min = (arr[i+m-1]-arr[i])<min ?  (arr[i+m-1]-arr[i]) : min;
    // cout<<min<<" ";
  }
  return min;
}

int main()
{
    int arr[] = {3, 4, 1, 9, 56, 7, 9, 12} ;
    int m = 5; // Number of students
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum difference is "
         << findMinDiff(arr, n, m);
    return 0;
}