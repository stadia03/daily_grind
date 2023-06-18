#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long a,b,p,q;
	    cin>>a>>b>>p>>q;
	    double x,y;
	    x=(double)p/a;
	    y=(double)q/b;
	//    cout<<x<<" "<<y<<" ";
	    if((x==y-1 || x==y+1 ||x==y ) && (p>=a && q>=b) &&(p%a==0) &&(q%b==0))
	        cout<<"YES"<<endl;
	   else
	        cout<<"NO"<<endl;
	}
	return 0;
}

