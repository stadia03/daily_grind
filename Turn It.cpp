#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
    while(t--){
        double u,v,a,s,fnl_vel;
        cin>>u>>v>>a>>s;
        
        fnl_vel=sqrt((u*u)+(2*(-a)*(s)));
      //  cout<<fnl_vel<<" ";
        if(fnl_vel<=v || ((u*u)+(2*(-a)*(s)))<0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
            
    }
	return 0;
}
