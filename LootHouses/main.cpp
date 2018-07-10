#include <iostream>
using namespace std;

int getMaxMoney(int a[], int n, int dp[]){
    if(n==1)
    {
        return a[0];
    }
    if(n==2)
    {
        return max(a[0] ,a[1]);
    }
    else{
        int previous = a[n-2];
        int maxxy = -999;
        for(int i=n-3;i>=0;i--){
            maxxy = max(maxxy,dp[i]);
        }
        return max(maxxy+a[n-1],previous);
    }
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int  dp[n];
    dp[0]  = a[0];
    dp[1] = max(a[0],a[1]);
    for(int i=2;i<n;i++){
        int previous = dp[i-1];
        int prevprevMax  = -999;
        for(int j=i-2;j>=0;j--){
            prevprevMax = max(prevprevMax, dp[j]);
        }
        dp[i] = max(prevprevMax+a[i], previous );
    }
    cout<<dp[n-1];
    return 0;
}