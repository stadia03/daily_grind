#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

	    
	    long long max=0,n,count=0;
	    cin>>n;
	    long long arr[n];
	    for(long long i=0;i<n;i++)
	        cin>>arr[i];
	   
	    for(long long i=0;i<n;i++)
	       {
	           if(arr[i]>max)
	           {
	               count++;
	               max=arr[i];
	           }
	       }
	    cout<<count<<endl;
	
	return 0;
}
