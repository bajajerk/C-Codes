#include <iostream>
using namespace std;

void printPatt(int n){
    for(int i=0;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<"0";
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }

}
int main() {
     printPatt(6);
    return 0;
}