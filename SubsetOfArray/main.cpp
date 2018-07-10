#include <iostream>
using namespace std;
int subset(int input[], int n, int output[][20]) {
    if(n==0){
        output[0][0] = 0;
        return 1;
    }
//    int smallOutput[9999][20];
    int smallAns = subset(input+1,n-1,output);
    for(int i=0;i<smallAns;i++){
        output[i+smallAns][0] = output[i][0]+1;
        output[i+smallAns][1] = input[0];
    }

    for(int i=0;i<smallAns;i++){
        for(int j=1;j<=output[j][0];j++){
            output[i+smallAns][j+1] = output[i][j];
        }
    }
    return 2*smallAns;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}