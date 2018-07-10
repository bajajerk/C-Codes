#include <iostream>
using namespace std;

int main() {
    int tests;
    cin>>tests;
    for(int k=1;k<=tests;k++){
        int n;
        cin>>n;
        int arr[n+1];
        arr[1] = 1;
        arr[2] = 1;
        arr[3] = 2;
        arr[4] = 4;
        for(int i = 5;i<=n;i++){
            int sum = arr[i-1]+arr[i-3]+arr[i-4];
            arr[i] = sum;
        }
        cout<<arr[n];
    }
    return 0;
}