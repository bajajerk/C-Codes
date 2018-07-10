#include <iostream>
#include<vector>
#include<math.h>

using namespace std;

    vector<int> listOfMaxxies(int n){
    vector<int> ans;
    int root = sqrt(n);
    for(int i=1;i<=root;i++){
        float temp = float(n)/i;
        int toInt = temp;
        if(temp==toInt){
            ans.push_back(max(i,toInt));
        }
    }
    return ans;
}


int downToZero(int n) {
    int dp[n+1];
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
    dp[4] = 3;

    for(int i=5;i<=n;i++){
        dp[i] = i;
        int temp = dp[i-1];

        vector<int> maxxyList = listOfMaxxies(i);
        for(int k=0;k<maxxyList.size();k++){
            temp = min(temp,dp[maxxyList[k]]);
        }
        dp[i] = temp+1;

    }
    return dp[n];

}

int main() {

        for(int i=0;i<100;i++){
            cout<<i<< " - "<<downToZero(i)<<endl;
        }

}