#include <iostream>
using namespace std;

int main() {
	// your code goes hereee
	int t;
	cin>>t;
	while(t--){
	    
	    long long l,r,diff;
	    cin>>l>>r;
	    diff=(r-l)+1;
	    cout<<diff+(diff-1)<<endl;
	}
	return 0;
}
