#include <cmath>
#include <iostream>
//#include<bits/stdc++.h>
#include<map>
using namespace std;

bool findPairs(int a[], int n) {
    map<int,int> mappy;
    for(int i=0;i<n;i++){
        mappy[a[i]]++;
    }
    int count = n*(n-1);
    int num1[count];
    int num2[count];
    int sum[count];
    int k = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            num1[k] = a[i];
            num2[k] = a[j];
            sum[k]  = a[i]+a[j];
            k++;
        }
    }

    for(int i=0;i<k;i++){
        for(int j=i+1;j<k;j++){
            if(sum[i] == sum[j]){
//                cout<<i<<" "<<j<<endl;
//                cout<<"sum  "<<sum[i]<<" "<<sum[j]<<endl;

                int success = 0;
                if(mappy[num1[i]]>=1){
                    mappy[num1[i]]--;
                    success++;
                }
                if(mappy[num2[i]]>=1){
                    mappy[num2[i]]--;
                    success++;
                }
                if(mappy[num1[j]]>=1){
                    mappy[num1[j]]--;
                    success++;
                }
                if(mappy[num2[j]]>=1){
                    mappy[num2[j]]--;
                    success++;
                }
                if(success==4){
                    return true;
                }
            }
        }
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
    cout<<findPairs(a,n);
    return 0;
}