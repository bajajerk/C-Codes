#include <iostream>
#include<cstring>
using namespace std;

int lcsR(string s1, string s2){
    if(s1.size()==0 || s2.size() ==0){
        return  0;
    }

    if(s1[0] == s2[0]){
        return 1+lcsR(s1.substr(1), s2.substr(1));
    }
    else{
        return max(lcsR(s1.substr(1),s2) , lcsR(s1,s2.substr(1)) );
    }

}

int lcsHelper(string s1,string s2 ,int m , int n, int **dp){
    if(s1.size()==0 || s2.size()==0){
        return 0;
    }
    if(dp[m][n]!=-1){
        return dp[m][n];
    }

    if(s1[0] == s2[0]){
        dp[m][n] = 1+lcsHelper(s1.substr(1),s2.substr(1),m-1,n-1,dp);
        return dp[m][n];
    }
    else{
        int a = lcsHelper(s1.substr(1),s2,m-1,n,dp);
        int a2 = lcsHelper(s1,s2.substr(1),m,n-1,dp);
        dp[m][n] = max(a,a2);
        return dp[m][n];
    }
}
int lcs(string s1, string s2){
    int m = s1.size();
    int n = s2.size();
    int ** dp = new int *[m+1];
    for(int i=0;i<m+1;i++){
        dp[i]  = new int [n+1];
    }

    for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
            dp[i][j] = -1;
        }
    }

    return lcsHelper(s1,s2,m,n,dp);
}


int main() {
    string s,t;
    cin>>s;
    cin>>t;
    cout<<lcs(s,t);
    return 0;
}