#include <iostream>
#include<math.h>

using namespace std;


int findMaxSquareWithAllZeros(int arr[][3], int row, int col){
//    cout<<row<<endl<<col<<endl;



    int dp[row][col];
    for(int i=0;i<col;i++){
        if(arr[0][i]==0){
            dp[0][i] = 1;
        }
        else{
            dp[0][i] = 0;
        }
    }



    for(int i=0;i<row;i++){
        if(arr[i][0]==0){
            dp[i][0] = 1;
        }
        else{
            dp[i][0] = 0;
        }
    }

    for(int i=1;i<row;i++){
        for(int j=1;j<col;j++){
            if(arr[i][j]==0){
                dp[i][j] = 1+ min(dp[i-1][j-1],min(dp[i-1][j], dp[i][j-1]));
            }
            else{
                dp[i][j] = 0;
            }
        }
    }

    int maxxy = -999;
    for(int i=0;i<row;i++) {
        for (int j = 0; j < col; j++) {
            maxxy = max(maxxy,dp[i][j]);
        }
    }
    return maxxy;




}

int main() {
    int a[3][3];

    for(int i=0;i<3;i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    int k  = findMaxSquareWithAllZeros(a,3,3);

    return 0;
}