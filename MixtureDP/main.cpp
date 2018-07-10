#include <iostream>
#include<vector>
using namespace std;

int cSum(int arr[],int i,int j){
    int ans = 1;
    for(int k=i;k<=j;k++){
        ans = ans * arr[k];
        ans=ans%100;
    }
}

int mixtures(int arr[], int i, int j , int **dp){
    if(i==j){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }

    int requiredMinCount = INT_MAX;
    for(int k=i;k<j;k++){
        int posiibleAnswer = mixtures(arr,i,k,dp)+
                mixtures(arr,k+1,j,dp)+
                cSum(arr,i,k) + cSum(arr,k+1,j);
        if(posiibleAnswer<requiredMinCount){
            requiredMinCount = posiibleAnswer;
        }
    }
    dp[i][j] = requiredMinCount;
    return requiredMinCount;
}

int solve(int n,vector<int>colors)
{
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i] = colors[i];
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
    return mixtures(arr,0,n-1,dp);

}



int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    cout<<solve(3,v);

    return 0;
}