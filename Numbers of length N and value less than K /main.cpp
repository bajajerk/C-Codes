#include <iostream>
#include<vector>
#include<math.h>
using namespace std;

int helper(int dp[][2],int digits,int num){

}


int solve(vector<int> &numbers, int digits, int num) {
    int nums = numbers.size();
    int dp[digits+1][nums];
    for(int i=0;i<nums;i++){
        dp[0][i] = 0;

    }
    for(int i=1;i<=digits;i++){
        for(int j=0;j<nums;j++){
            dp[i][j] = pow(nums,i-1);
        }
    }

    for(int i=0;i<=digits;i++){
        for(int j=0;j<nums;j++){
            cout<<dp[i][j]<<' ';
        }
        cout<<endl;
    }

    return helper(dp,digits,num);

}

int main() {
   vector<int> numers;

   numers.push_back(0);
    numers.push_back(1);
    numers.push_back(2);
    numers.push_back(5);

    cout<<solve(numers, 3,1);

    return 0;
}