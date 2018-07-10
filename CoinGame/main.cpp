#include <iostream>
using namespace std;

string solve(int n, int x, int y)
{

  bool dp[n+1];
  for(int i=0;i<=n;i++){
    dp[i] = false;
  }
  dp[1]  = true;
  dp[x] = true;
  dp[y] = true;
  for(int i=2;i<=n;i++){
    if(dp[i]==true){
      continue;
    }

    else{
      if(dp[i-1]==false){
        dp[i] = true;
        continue;
      }

      if(i-x>=1){
        if(dp[i-x]==false){
          dp[i] = true;
          continue;
        }
      }

      if(i-y>=1){
        if(dp[i-y]==false){

          dp[i] = true;
          continue;
        }
      }
     dp[i] = false;
    }
  }
  for(int i=1;i<=n;i++){
      cout<<dp[i]<<endl;
  }
  if(dp[n] == true){
    string ans  = "Beerus";
    return ans;
  }
  else{
    string ans  = "Whis";
    return ans;
  }

}

int main() {
    int n;
    cin>>n;
    cout<<solve(n,2,3);
}