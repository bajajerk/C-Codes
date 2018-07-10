#include <iostream>
using namespace std;

int FindSpecialRow(int mat[][100], int n){
    int i=0;
    while(i<n){
        int kCount = 0;
        for(int k=0;k<n;k++){
            if(k==i){
                continue;
            }
            if(mat[i][k]==0){
                kCount++;
            }
        }

        int lCount = 0;
        for(int l=0;l<n;l++){
            if(l==i){
                continue;
            }
            if(mat[l][i]==1){
                lCount++;
            }
        }

        if(kCount==lCount){
            if(kCount==n-1){
                return i;
            }

        }
//        cout<<kCount<<" "<<lCount<<endl;
        i++;
    }

    return -1;
}


int main() {
    int a[100][100];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }

    cout<<FindSpecialRow(a,3);
}