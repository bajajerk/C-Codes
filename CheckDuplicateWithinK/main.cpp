#include <iostream>
#include<map>
using namespace std;


bool CheckDuplicateWithinK(int a[], int n, int k){
    map <int,int> mappy;
    for(int i=0;i<n;i++){
        if(mappy[a[i]] ==0){
            mappy[a[i]] = i+1;
        }
        else{
            int puranaIndex = mappy[a[i]];
            cout<<a[i]<<endl;
            cout<<mappy[a[i]]<<endl;
            cout<<i<<endl;
            if(-puranaIndex+i+1 == k){
                return true;
            }

        }
    }
    return false;
}



int main() {
    int a[5] = {3,4,9,4,2};
    cout<<CheckDuplicateWithinK(a,5,10);
    return 0;
}