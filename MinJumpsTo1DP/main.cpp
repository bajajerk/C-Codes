#include <iostream>
//#include<std/bitsc++.h>
using namespace std;

int main() {
    int cases;
    cin>>cases;
    for(int k=0;k<cases;k++){
        int n;
        cin>>n;
        int arr[n];
        for(int i =0;i<n;i++){
            cin>>arr[i];
        }
        int dp[n];
            for(int i =0;i<n;i++){
                dp[i] = 0;
            }
        dp[n-1] = 0;
        for(int i=n-2;i>=0;i--){
            int stepsAvailable = arr[i];
            int index = i;
            if(arr[i]>= n - index -1){
//                cout<<"Which has direct goiinf "<<i<<endl;
                dp[i]= 1;
            }
            else{
                int min = 99999;
                for(int j =1 ;j<=stepsAvailable;j++) {
                    if (j + i < n) {
                        if (dp[j + i] < min) {
                            min = dp[j + i];
                        }
                    }
                }
                dp[i] = 1 + min;
            }

        }
        if(dp[0]>9800){
            cout<<"-1"<<endl;
        }
        else{
            cout<<dp[0]<<endl;
        }
    }

}