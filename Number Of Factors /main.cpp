#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int size = 1000001;
  int sieve[1000001];
  for(int i=0;i<size;i++){
      sieve[i]= 0;
  }

  for(int i=2;i<size;i++){
      if(sieve[i]==0){
          int mul = 1;
          while(i*mul<size){
              sieve[i*mul]++;
              mul++;
          }

      }
  }
  int dp[11][size];
  for(int i=1;i<11;i++){
      for(int j=1;j<size;j++){
        dp[i][j] = 1;
          if(j==1){
              dp[i][j] = 0;
              if(sieve[j] == i){
                  dp[i][j]++;
              }
          }
          else{
              dp[i][j] = dp[i][j-1];
              if(sieve[j] == i){
                  dp[i][j]++;
              }
          }

      }
  }


  for(int i=0;i<22;i++){
      cout<<sieve[i]<<" ";
  }
}