//completed

#include <bits/stdc++.h>
using namespace std;
 

class gaurab{
  public:
   int n;
   
   vector <int> v1;
  priority_queue<int> pq;
  gaurab(int arr[],int n){
    this->n = n;
   for(int i=0;i<n;i++)
    v1.push_back(arr[i]);


    // /////////////////  test area   //////////
    // cout<<"Inside the class the value of n is "<<n<<'\n';
    // for(int i=0;i<n;i++)
    //   cout<<v1[i]<<" ";

    // /////////////////  test area   //////////

  }

  void backtrack(int index=0,int sum=0){
    //cout<<"index="<<index<<'\n';
    if(index==n)
    {
        pq.push(sum);
        return ;
    }
    backtrack(index+1, sum+v1[index]);
    
    backtrack(index+1, sum);
    
  }

};

int main() {
 
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
 gaurab obj(arr,n);
 obj.backtrack();
 while(!obj.pq.empty()){
  cout<<obj.pq.top()<<" ";
  obj.pq.pop();
 }
  return 0;
}