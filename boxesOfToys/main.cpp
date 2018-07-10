#include <iostream>
using namespace std;

int FindMaximumEqualCount(int arr[], int n, int k){
    int helper[n];
    for(int i=0;i<n;i++){
        helper[i] = 0;
    }
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum%k==0){
                helper[i] = sum/k;
            }
        }
//        cout<<sum<<endl;
    }
//    for(int i=0;i<n;i++){
//        cout<<helper[i]<<endl;
//    }

    int maxxy = -9769;
    for(int i=0;i<n;i++){
        if(maxxy<helper[i]){
            maxxy = helper[i];
        }
    }
    return maxxy;
}


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<FindMaximumEqualCount(arr,n,3);

}