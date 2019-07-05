#include <iostream>
using namespace std;

int findPlatform(int arr[], int dep[], int n){
    int plats = 0;
    sort(arr,arr+n);
    sort(dep,dep+n);

    int i=1, j=0;

    int num = arr[0];
    plats++;
    int ans = 0;
    int current = arr[0];
    while(i<n && j<n){
        cout<<i<<"  "<<j<<endl;
        if(arr[i]<=dep[j]){
            current = arr[i];
            plats++;
            ans = max(plats,ans);
            i++;
//            cout<<"I inc"<<endl;
        }
        else if(arr[i]>dep[j]){
            plats--;
            j++;
            current = dep[j];
//            cout<<"j inc"<<endl;
        }
    }
//    cout<<i<<"  "<<j<<endl;
    return ans;

}

int main() {
    int n;
    cin>>n;
    int arr[n];
    int dep[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>dep[i];
    }

    cout<<findPlatform(arr,dep,n);
    return 0;
}

