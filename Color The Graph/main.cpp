#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n];
    for(int i=0;i<n;i++){
        a[i]  = 0;
    }

    for(int i = 0;i < m; i++) {
        int starter, ender;
        cin >> starter >> ender;
        starter-=1;
        ender-=1;

        if(a[starter]==0){
            a[starter] = 1;
        }
        else if (a[starter]==1){
            if(a[ender]==1){
                cout<<"NO";
                return 0;
                break;
            }
        }
        else if(a[starter]==2){
            if(a[ender]==2){
                cout<<"NO";
                return 0;
                break;
            }
        }
        if(a[ender]==0 && a[starter] == 1){
            a[ender] = 2;
        }
        if(a[ender]==0 && a[starter] == 2){
            a[ender] = 1;
        }

    }
    cout<<"YES";
    return 0;




}