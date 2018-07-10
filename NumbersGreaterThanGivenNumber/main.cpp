#include <iostream>
#include<map>
using namespace std;

int getNumbersGreater(int a[], int n, int fact[], map<int,int> mappy){
    if(n==0 || n==1){
        return 0;
    }

    else{
        int ans = 0;
        for(int i=a[0]+1;i<10;i++){
            if(mappy[i]>0){
                ans += fact[n-1];
            }
        }
        mappy[a[0]]--;
        ans = ans + getNumbersGreater(a+1,n-1,fact,mappy);
        return ans;
    }
}


int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map <int,int> mappy;
    for(int i=0;i<n;i++){
        mappy[a[i]]++;
    }

    int fact[10];
    fact[0] = 1;
    for(int i=1;i<n;i++){
        fact[i] = i * fact[i-1];
    }

    int count = getNumbersGreater(a,n,fact,mappy);
    cout<<count;


}