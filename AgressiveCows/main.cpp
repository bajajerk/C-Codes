#include <iostream>
#include<algorithm>
using namespace std;

bool placeThem(int a[], int n, int distance,int cows){
//    cout<<"N is "<<n <<"  Cows are    " <<cows<<endl;
    if(cows==0){
//        cout<<"?";
        return true;
    }
    if(n<=0){
//        cout<<cows<<" "<<n<<endl;
        return false;
    }
int i;
    for( i=1;i<n;i++){
        if(a[i]-a[0]>=distance){
            return placeThem(a+i,n-i,distance,cows-1);
        }
    }
    if(i==n){
        return false;
    }
}
int main() {
    int x;
    cin>>x;
    for(int y=1;y<=x;y++) {


        int n;
        cin >> n;
        int a[n];
        int cows;
        cin >> cows;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);

        int maxPossible = 0;
        int max_distance_possible = a[n - 1] - a[0];
        for (int i = 1; i <= max_distance_possible; i++) {
            bool isPlaced = placeThem(a, n, i, cows - 1);
//            cout << isPlaced << endl;
            if (isPlaced == true) {
                maxPossible = i;
            }
        }
        cout << maxPossible << endl;
    }
}