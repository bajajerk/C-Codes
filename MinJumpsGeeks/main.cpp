//Working code without dp
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int numberOfJumps(int a[],int n , int index){
    if(a[index] ==0){
        return INT_MAX;
    }
    if(index>=n-1){
        return 0;
    }
//    if(a[index]>n-index-1){
//        return 1;
//    }
    int numberOfStepsItCanTake  = a[index];
    int min = INT_MAX;
    for(int i = 1;i<=numberOfStepsItCanTake;i++){

        int ans = numberOfJumps(a,n,index+i)+1;
        cout<<"Steps to reach the end from " <<index<<" is "<<ans<<endl;
        if(ans<min){
            min = ans;
        }
    }
//    cout<<"min for"<<index<<" is "<<min<<endl;
    return min;


}

int main() {
    int cases;
    cin>>cases;
    for(int k=0;k<cases;k++){
        int t;
        cin >> t;
        int a[t];
        for (int i = 0; i < t; i++) {
            cin >> a[i];
        }
        cout << numberOfJumps(a, t, 0)<<endl;
    }






    return 0;
}
