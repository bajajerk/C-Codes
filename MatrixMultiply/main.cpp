#include <iostream>
using namespace std;

int matrixMultiplyCount(int arr[], int i, int j , int **dp){
    if(i==j){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }

    int requiredMinCount = INT_MAX;
    for(int k=i;k<j;k++){
        int posiibleAnswer = matrixMultiplyCount(arr,i,k,dp)+
                matrixMultiplyCount(arr,k+1,j,dp)+
                arr[i-1]*arr[k]*arr[j];
        if(posiibleAnswer<requiredMinCount){
            requiredMinCount = posiibleAnswer;
        }
    }
    dp[i][j] = requiredMinCount;
    return requiredMinCount;
}
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ** dp = new int * [n];
    for(int i=0;i<n;i++){
        dp[i] = new int[n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            dp[i][j] = -1;
        }
    }

    cout<<matrixMultiplyCount(a,1,n-1,dp);
}