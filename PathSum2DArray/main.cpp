#include <iostream>
using namespace std;
int helperFunction(int mat[][3],int rows,int cols , int i, int j,int k ){
    cout<<i<<" "<<j<<" "<<k<<endl;
    if(i==rows-1 && j==cols-1 && k==mat[i][j]){
        return 1;
    }
    if(i==rows-1 && j==cols-1 && k!=mat[i][j]){
        return 0;
    }
    if(i>rows-1 || j>cols-1) {
        return 0;
    }
    int goRight = helperFunction(mat,rows,cols,i,j+1,k-mat[i][j]);
    int goDown = helperFunction(mat,rows,cols,i+1,j,k-mat[i][j]);
    cout<<goRight<<" "<<goDown<<endl;
    return goRight+ goDown;
}
int FindPathsWithKCoins(int mat[][3], int Rows, int Cols, int k){
    return helperFunction(mat,Rows,Cols,0,0,k);
}


int main() {

    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    cout<<FindPathsWithKCoins(a,3,3,14);
    return 0;
}