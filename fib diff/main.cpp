#include <iostream>
#include<math.h>
using namespace std;

int diff(int a, int b){
    int maxxy = max(a,b);
    int dp[maxxy+1];
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2;i<maxxy+1;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    for(int i=0;i<maxxy+1;i++){
       cout<<dp[i]<<" ";
    }

    return dp[maxxy] - dp[min(a,b)];



}

int main() {
    int a,b;
    cin>>a>>b;
   cout<<diff(a-1,b-1);
    return 0;
}