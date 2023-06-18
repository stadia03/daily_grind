#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    
	    long long n,ans=1;
	    cin>>n;
	    //ans=0;
	   int arr[n]={0};
	    if(n==1)
	        {
	            cout<<6<<endl;
	            continue;
	        }
	    
	    arr[0]=1;
	    arr[n-1]=5;
	    for(int i=0;i<n;i++){
	        
	      //  cout<<ans<<endl;
	      cout<<arr[i];
	    }
	    cout<<endl;
	   
	   // cout<<ans;
	}
	
	
	return 0;
}
