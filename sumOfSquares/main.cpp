#include <iostream>
#include<math.h>
using namespace std;

int allWays(int x) {
    int dp[x+1];
    dp[1] = 1;
    dp[2] = 2;
    for(int i=3;i<=x;i++){
        dp[i]  = i;
        for(int j=1;j<i;j++){
            if(j*j==i){
//                cout<<"mm";
                dp[i] = 1;
                break;
            }
            dp[i] = min(dp[i],dp[j] + dp[i-j]);
//            cout<<"dp" <<dp[i]<<endl;
        }
    }
    return dp[x];

}


int allWays2(int x,int n) {
    int dp[x+1];
    for(int i=1;i<pow(2,n);i++){
        dp[i] = i;
    }
    for(int i=3;i<=x;i++){
        dp[i]  = i;
        for(int j=1;j<i;j++){
            if(pow(j,n)==i){
                dp[i] = 1;
                break;
            }
            dp[i] = min(dp[i],dp[j] + dp[i-j]);

        }
    }
    return dp[x];

}
int main() {
    int n;
    cin>>n;
    cout<<allWays2(n);
    return 0;
}