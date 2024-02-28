//STL map

#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  map<int,int>hashing;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
    {
      int user;
      cin>>user;
      hashing[user]++;
    }
  
  int query;
  cin>>query;

  for(int i=0;i<query;i++){
    int x;
    cin>>x;
    cout<<"Frequency is:"<<hashing[x]<<endl;

  }

 
 
  return 0;
}