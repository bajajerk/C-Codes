#include <iostream>
using namespace std;

int getMin(int *arr, int n){
    int dp[n];
    dp[0] = 1;
    int count = 0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            dp[i] = 1+dp[i-1];
        }
        else{
            dp[i] = 1;
        }
    }

    for(int i=0;i<n;i++){
        count+=dp[i];
    }
    return count;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}