#include <iostream>
using namespace std;

void PrintAllSumKxK(int **mat, int n, int k){
    for(int i =0;i<=n-1-k+1;i++){
        for(int j=0;j<=n-1-k+1;j++){
            int sum = 0;
            for(int l=0;l<k;l++){
                for(int m=0;m<k;m++){
                    sum+=mat[i+l][j+m];
                }
            }
//            sum= mat[i][j]+mat[i][j+1] + mat[i+1][j]+ mat[i+1][j+1];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}