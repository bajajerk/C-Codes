#include <iostream>
using namespace std;


bool ContainsSubsetDP(int arr[], int n , int sum){
    int** dp = new int*[n+1];
    for(int i=0;i<=n;i++){
        dp[i] = new int[sum+1];
    }

    for(int i=0;i<=n;i++){
        dp[i][0] = 1;
    }

    for(int i=1;i<=sum;i++){
        dp[0][sum] = 0;
    }

    for(int i = 1;i<=n;i++){
        for(int j =1;j<=sum;j++){

//            I am not taking this fucking element
            dp[i][j] = dp[i-1][j];

            if(j>=arr[i-1]){
                dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]] ;
            }

        }
    }

    return dp[n][sum];


}

bool containsSubset(int arr[], int size , int sum){
    if(sum==0){
        return true;
    }

    if(size==0 && sum!=0){
        return false;
    }

    bool iAmIncludingFirst = containsSubset(arr+1,size-1,sum-arr[0]);
    bool iAmNotTakingFirst = containsSubset(arr+1,size-1,sum);

    if(iAmIncludingFirst || iAmNotTakingFirst){
        return  true;
    }
    return false;
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int re ;
    cin>>re;
    bool ans = ContainsSubsetDP(a,n,re);
    if(ans){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}