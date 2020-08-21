
#include <bits/stdc++.h>
using namespace std;

int lst(vector<int>& st) {
  int n = st.size();
  int total = 0;
  for(int i = 0; i < n; i++){
     total += st[i];
  }
  cout<<"Total :\t"<<total<<"\n";
  int req = total / 2;
  cout<<"Req :\t"<<req<<"\n";
  vector <bool> dp(req + 1, false);
  dp[0] = true;
  int r = 0;
  
  for(int i = 0; i < n; i++){
     for(int j = req; j - st[i] >= 0; j--){
        dp[j] = dp[j] || dp[j - st[i]];
        cout<<"dp["<<j<<"] :\t"<<dp[j]<<"\t\tdp["<<j-st[i]<<"] :\t"<<dp[j-st[i]]<<"\n";
        if(dp[j]) r = max(r, j);
        cout<<"r :\t"<<r<<"\n";
     }
  }
  return total - (2 * r);
}
main(){
   vector<int> v = {2,7,4,1,8,1};
   
   cout << lst(v);
}
