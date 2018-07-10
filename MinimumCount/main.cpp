#include <iostream>
#include<math.h>
#include<vector>
using namespace std;
int minCount(int n){
    int k = sqrt(n);
    vector<int> v;
    for(int i=k;i>=1;i--){
        int sq = i*i;
        if(n%sq==0){
            v.push_back(n/sq);
        }
    }
    int minni=INT_MAX;
    for(int i=0;i<v.size();i++){
        minni = min(v[i],minni);
    }
    return minni;
}


int main() {
    cout<<minCount(12);
    return 0;
}