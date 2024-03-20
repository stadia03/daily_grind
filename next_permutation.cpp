

#include <bits/stdc++.h>
using namespace std;

void next_permutation(vector <int> & v){

  int index=-1,n=v.size();

// finding break point
  for(int i=n-1;i>0;i--)
  {
    if(v[i]>v[i-1]){
      index=i-1;
      break;
    }
  }

  // if number is the last one in permutation 
  // revering the whole no. as to provide the first permutation
  if(index==-1){
     reverse(v.begin(),v.end());
  }

  // swapping the digit from break point
  // hope you understand
  for(int i=n-1;i>=0;i--){
    if(v[i]>v[index]){
      swap(v[i],v[index]);
      break;
    }
  }

  // reversing the rest of digits from break point 
  // as to make it next permutation
  reverse(v.begin()+index+1,v.end());


}

int main() {
 
  vector <int> temp={2,1,5,4,3,0,0};
  next_permutation(temp);

  for(int i=0;i<temp.size();i++){
    cout<<temp[i]<<" ";
  } 
  return 0;
}