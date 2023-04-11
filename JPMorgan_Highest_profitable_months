#include <bits/stdc++.h>
using namespace std;
 
int main() {
  
  int n,k,user;
  cin>>n>>k;
  vector <int> stockPrices;
   for(int i=0 ; i<n ; i++)
    {
        cin>>user;
        stockPrices.push_back(user);
    }
      

  int res=0,temp=2,increasing=0;
     for(int i=1;i<stockPrices.size();i++){
       
        if(stockPrices[i]>stockPrices[i-1]){
          increasing++;
        }
        else{
          increasing=0;
          temp=1;

        }
      // cout<<"i="<<i<<"t="<<temp<<"k="<<k<<'\n';
        if(increasing  && temp>=k){
          res++;
       //  cout<<"i="<<i<<endl;
        }


        
       // cout<<"\n"<<stockPrices[i]<<"\n";
        temp++;
     }





    //  for(int i=0;i<stockPrices.size()-(k-1);i++){
    //      int temp=k;
    //      int profit=1;
    //     int prev=stockPrices[i];
    //     int j=i;
    //       while(temp--){
           
    //           if(stockPrices[j+1]<prev)
    //             {
    //                 profit=0;
    //                 break;}
    //                  prev=stockPrices[j];
    //             j++;
             
    //       }
    //       if(profit){
    //              res++;  
    //            //  cout<<"i="<<i<<"\n";
    //       }
             
    //  }
    //  cout<< res;
    

 cout<<res;
  return 0;
}
