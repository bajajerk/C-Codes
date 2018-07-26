#include <iostream>
#include<math.h>
using namespace std;

int mod = pow(10,9) + 7;


int solve(int n) {
    int dp[n+1][5];
    for(int i=0;i<5;i++){
        dp[0][i] = 0;
    }
    for(int i=0;i<5;i++){
        dp[1][i] = 1;
    }

    for(int i=2;i<=n;i++){
        for(int j=0;j<5;j++){
            if(j==0){
                dp[i][j] = (dp[i-1][1])%mod + (dp[i-1][2])%mod;
            }
            if(j==1){
                dp[i][j] = (dp[i-1][2])%mod;
            }
            if(j==2){
                dp[i][j] = (dp[i-1][0])%mod + (dp[i-1][1])%mod  + (dp[i-1][3])%mod  + (dp[i-1][4])%mod ;
            }
            if(j==3){
                dp[i][j] = (dp[i-1][0])%mod  + (dp[i-1][4])%mod ;
            }
            if(j==4){
                dp[i][j] = (dp[i-1][1])%mod  + (dp[i-1][3])%mod ;
            }
        }
    }

    int sum = 0;
    for(int i=0;i<5;i++){
        sum+=dp[n][i];
        sum = sum %mod;
    }

    return sum%mod ;


}


int main() {
    cout<<solve(20);
    return 0;
}