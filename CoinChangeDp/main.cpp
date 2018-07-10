#include <iostream>
using namespace std;

int countWaysToMakeChangeDp(int denominations[], int numDenominations, int sum,int **dp)
{
    if(sum==0){
        return 1;
    }
    if(numDenominations     == 0||sum<0){
        return 0;
    }

    if(dp[numDenominations][sum]!=-1){
        return dp[numDenominations][sum];
    }


//    Taking first element
    int step1  = countWaysToMakeChangeDp(denominations,numDenominations,sum-denominations[0],dp);

//    Not taking it now
        int step2 = countWaysToMakeChangeDp(denominations+1,numDenominations-1,sum,dp);
        int ans = step1 + step2;
        dp[numDenominations][sum] = ans;
        return ans;

}

int countWaysToMakeChange(int denominations[], int numDenominations, int sum){
    int **dp = new int * [numDenominations];

    for(int i= 0;i<numDenominations;i++){
        dp[i] = new int[sum];
    }
//    cout<<"hrer";
    for(int i=0;i<numDenominations;i++){
        for(int j=0;j<sum;j++){
            dp[i][j]=-1;
        }
    }
//    cout<<"going";
//    return 1;

    return countWaysToMakeChangeDp(denominations,numDenominations,sum,dp);



}


int main() {
    int a[2] = {1,2};
    cout<<countWaysToMakeChange(a,2,2);
    return 0;
}