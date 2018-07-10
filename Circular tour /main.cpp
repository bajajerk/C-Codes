#include <iostream>
#include<queue>
using namespace std;


bool Ispossible(int petrol[],int distance[] , int extraPetrol, int n){
    if(n==0)
        return true;
    if(petrol[0]+extraPetrol<distance[0]){
        return false;
    }
    else{
        return Ispossible(petrol+1,distance+1,extraPetrol+petrol[0]-distance[0],n-1);
    }
}

int main() {
    int n;
    cin >> n;
    int petrol[n], distance[n];
    for (int i = 0; i < n; i++) {
        cin >> petrol[i] >> distance[i];
    }
    bool ans = false;
    for(int i=0;i<n;i++){
        if(Ispossible(petrol+i,distance+i,0,n-i)){
            ans = true;
            cout<<i<<endl;
            break;
        }
    }

    if(!ans){
        cout<<"-1"<<endl;
    }
}