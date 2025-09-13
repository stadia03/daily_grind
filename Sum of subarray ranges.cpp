// Sum of subarray ranges

class Solution {
public:
    
    vector<int> nextToggleElement(vector<int>&arr,int toggle){
      int n=arr.size();
      stack <int>st;
      vector<int>res(n);
      if(toggle){
          for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()] <= arr[i]){st.pop();}
        if(st.empty()){
          res[i]=n;
         
        }else{
          res[i]=st.top();
          
      }
       st.push(i);
    } 
      }else{
        for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()] >= arr[i]){st.pop();}
        if(st.empty()){
          res[i]=n;
         
        }else{
          res[i]=st.top();
          
      }
       st.push(i);
    } 
      }
      
    return res;
  }
    vector<int> prevToggleElement(vector<int>&arr,int toggle){
        int n=arr.size();
      stack <int>st;
      vector<int>res(n);
      if(toggle){
           for(int i=0;i<n;i++){
        
         while(!st.empty() && arr[st.top()] < arr[i]){st.pop();}
        if(st.empty()){
          res[i]=-1;
         
        }else{
          res[i]=st.top();
          
      }
       st.push(i);
      }
      }else{
         for(int i=0;i<n;i++){
        
         while(!st.empty() && arr[st.top()] > arr[i]){st.pop();}
        if(st.empty()){
          res[i]=-1;
         
        }else{
          res[i]=st.top();
          
      }
       st.push(i);
      }
      }
     return res;
    }


   
    long long SubarrayElementSum(vector<int>&arr,int toggle){
      int n=arr.size();
      vector<int>prevToggleElementArr=prevToggleElement(arr,toggle);
      vector<int>nextToggleElementArr=nextToggleElement(arr,toggle);
     
        long long res=0;
        for(int i=0;i<n;i++){
          res+= (i-prevToggleElementArr[i])*(nextToggleElementArr[i]-i)* (long long)arr[i];
        }
        return res;
    }    

    long long subArrayRanges(vector<int>& nums) {
        long long greatestSubarraySum = SubarrayElementSum(nums,1);
        long long smallestSubarraySum = SubarrayElementSum(nums,0);
        return greatestSubarraySum - smallestSubarraySum;
    }
};
