#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  vector <int> prices={};

  int min_price=prices[0];
  int max_profit=0;
  
  for(int i=1;i<prices.size();i++){
    min_price=min(min_price,prices[i-1]);
    max_profit=max(max_profit,prices[i]-min_price);
  }

  cout<<max_profit;
 
  return 0;
}