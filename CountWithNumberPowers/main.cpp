#include <iostream>
#include<math.h>
#include<vector>
using namespace std;

int allWaysHelper(int a[] , int n,int sum,vector<int> print){
    if(sum==0){
        for(int i=0;i<print.size();i++){
            cout<<print[i]<<" ";
        }
        cout<<endl;
        return 1;
    }
    if(n==0 || sum<0){
        return 0;
    }

    int y = allWaysHelper(a+1, n-1, sum,print);

    print.push_back(a[0]);
    int x = allWaysHelper(a+1, n-1, sum- a[0],print);

    return x+y;
}


int allWays(int number, int power) {
    int root = pow(number, 1.0/power);
    int a[root];
    for(int i=0;i<root;i++){
        int temp = pow(i+1,2);
        a[i] = temp;
    }
    vector<int> print;
    return allWaysHelper(a,root, number,print);
}

int main() {
    int n;
    cin>>n;
    int pow;
    cin>>pow;
//    int a = pow(n, 1.0/2);
    cout<<allWays(n,pow);
    return 0;
}