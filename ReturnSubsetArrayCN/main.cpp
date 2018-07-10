#include <iostream>
int subset(int input[], int n, int output[][20]) {
    if(n==0) {
        output[0][0] = 0;
        return 1;
    }
    else{
        int smallerArray = subset(input+1,n-1,output);
        for(int i=0;i<smallerArray;i++){
            output[smallerArray+i][0] = output[i][0]+1;
        }

        for(int i=0;i<smallerArray;i++) {
            output[smallerArray+i][1]=input[0];

            for(int j=1;j<=output[i][0];j++) {
                output[i+smallerArray][j+1]=output[i][j];
            }
        }
        return 2*smallerArray;
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}