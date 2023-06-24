#include <bits/stdc++.h>
using namespace std;
 

class gaurab{


  public:
  vector <int> v1;
  gaurab(int n){

      v1.resize(n+1);

     fill(v1.begin(), v1.end(), -1);

       v1[0]=0;
     v1[1]=1;

    //  for(int i=0;i<v1.size();i++)
    //     cout<<v1[i]<<" ";
  }
 

  int fib(int n){

    if(v1[n]!=-1)
      return v1[n];
    else
      {
        
        return v1[n] =  fib(n-1)+fib(n-2);
        
      }


  }

};


int main() {
 
  int n;
  cin>>n;

  gaurab obj(n);
  cout<<"main"<<obj.fib(n)<<endl;


  



  return 0;
}



