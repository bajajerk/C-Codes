#include <iostream>
using namespace std;

int findSum(int a[],int n){
    int dp[n];
    dp[0] = a[0];
    for(int i=1;i<n;i++){
        if(dp[i-1]>0){
            dp[i] = a[i] + dp[i-1];
        }
        else{
            dp[i] = a[i];
        }
    }
    int maxxy = -99999;
    for(int i=0;i<n;i++){
        if(dp[i]>maxxy){
            maxxy = dp[i];
        }
    }
    return maxxy;
}




int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<findSum(a,n);

    return 0;
}