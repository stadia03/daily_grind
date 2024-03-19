

#include <bits/stdc++.h>
using namespace std;

vector<int> rearrange_equal_case(vector <int> arr,int n){
  
  int pos=0,neg=1;
  vector <int> temp(n);
  for(int i=0;i<n;i++){
    if(arr[i]>0)
      {
        temp[pos]=arr[i];
        pos+=2;
      }
    else{
      temp[neg]=arr[i];
      neg+=2;
    }
  }
  return temp;
}

void rearrange_unequal_case(vector <int> & arr,int n){

//so, at the end we have to simply add all the 
// remaining elements from the array to new array

  vector <int> pos,neg;

  for(int i=0;i<n;i++){
    if(arr[i]>0)
      pos.push_back(arr[i]);
    else
      neg.push_back(arr[i]);
  }
  if(neg.size()<pos.size()){
      
    for(int i=0;i<neg.size();i++){
      arr[i*2]=pos[i];
      arr[(i*2)+1]=neg[i];
    }
    int index=neg.size();
    for(int i=neg.size()*2;i<n;i++){
        arr[i]=pos[index];
        index++;
    }
      
    
  }
  else{
    for(int i=0;i<pos.size();i++){
      arr[i*2]=pos[i];
      arr[(i*2)+1]=neg[i];
    }
    int index=pos.size();
    for(int i=pos.size()*2;i<n;i++)
      {arr[i]=neg[index];
    index++;}
  }
      
}


int main() {
 
  vector <int> arr={7,7,7,-8,3,-2,-1,5,9,-4};
  int n=arr.size();
  // if no. of pos == no. of neg
  // arr=rearrange_equal_case(arr,n);

  // // if no. of pos != no. of neg
  rearrange_unequal_case(arr,n);

  for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
 
  return 0;
}