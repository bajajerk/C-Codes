#include <iostream>
#include<vector>
using namespace std;

int getNumber(int n, int uptill, int count){
    if(count>3){
        return 0;
    }
    if(uptill>n){
        return 0;
    }
    if(count<=3 && uptill==n){
        return 1;
    }
    int sum = 0;
    for(int i=0;i<=n;i++){
        sum+=getNumber(n,uptill+i,count+1);
    }
    return sum;


}

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int k;
        cin>>k;
        cout<<getNumber(k,0,0)<<endl;

    }

}