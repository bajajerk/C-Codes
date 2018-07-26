#include <iostream>
#include<algorithm>
#include<map>

using namespace std;

int main() {
    int mod = 10^9 + 7;
    int size = 1000000;
    int t;
    cin>>t;
    for(int m=0;m<t;m++) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int dp[size];
        for (int i = 0; i < size; i++) {
            dp[i] = 0;
        }
        for (int i = 0; i < n; i++) {
            dp[a[i]] = 1;
        }

        sort(a, a + n);
        for (int i = 0; i < n; i++) {
            int ele = a[i];
            int mul = 2;
            int m = mul * ele;
            while (m < size) {
                if (dp[m] >= 1) {
                    dp[m]++;
                } else {

                }
                mul++;
                m = ele * mul;
            }
        for(int i=0;i<10;i++){
            cout<<dp[i]<<" ";
        }
//
        cout<<endl;
        }

        int sum = 0;
        for (int i = 0; i < 10000; i++) {
            sum += (dp[i]) % mod;
        }
        sum = sum % mod;

        cout << sum << endl;
    }
}