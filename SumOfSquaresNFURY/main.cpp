#include <iostream>
#include<math.h>
#include<vector>
using namespace std;

//int countWays(vector<int>v , int n, int index){
//    if(n==0){
////        cout<<"?";
//        return 0;
//    }
//    if(v.size() == index || n<0 ){
//        return -99999;
//    }
//
//    int take1stElement  =1+ countWays(v,n-v[index],index);
//    int notTakeElement  = countWays(v,n,index+1);
////    cout<<take1stElement<<" "<<notTakeElement<<endl;
//    if(take1stElement<0){
//        return notTakeElement;
//    }
//    if(notTakeElement<0){
//        return  take1stElement;
//    }
//    return  min(take1stElement,notTakeElement);
//}
//
//int bestPossibleSquaresLength(int n){
//    int rootOfN = sqrt(n);
//    vector<int> v;
//    for(int i=1;i<=rootOfN;i++){
//        v.push_back(i*i);
//    }
////    cout<<"GOing vector";
////    for(int i=0;i<v.size();i++){
////        cout<<v[i]<<endl;
////    }
//    return countWays(v,n,0);
//}


int leastSquaresNeeded(int n, int dp[]){
    if(dp[n]!= -1){
        return dp[n];
    }
//    for(int i = 0;i<=n;i++){
//        cout<<dp[i]<<endl;
//    }
    return 10000;

}

int main() {
    int n;
    cin>>n;
    int * arr = new int[n+1];
    for(int i = 0;i<=n;i++){
        arr[i]  = -1;
    }
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 3;
    arr[4]  = 2;

    int root = sqrt(n);
    for(int i = 1; i<=root;i++){
        arr[i*i]  = 1;
    }
    cout<<leastSquaresNeeded(n,arr);


    return 0;
}