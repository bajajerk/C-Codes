#include <iostream>
using namespace std;

void reverseIngroups(int a[], int n, int k){
    if(k==1){
        return;
    }
    else if(k==n){
        int start = 0;
        int end = n-1;
        while (end>start){
            swap(a[start], a[end]);
            start++;
            end--;
        }
        return;
    }
    else{
        int startGlobal= 0;
        int endGlobal =k-1;
        while(startGlobal<n){
            if(endGlobal>n-1){
                endGlobal = n-1;
            }

            int start = startGlobal;
            int end = endGlobal;
            while (end>start){
                swap(a[start], a[end]);
                start++;
                end--;
            }
            startGlobal+=k;
            endGlobal+=k;
        }
//        if(endGlobal!=n-1){
//
//        }

    }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        reverseIngroups(a,n,k);
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}