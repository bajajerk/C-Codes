#include <iostream>
using namespace std;

int subset(int input[], int n, int output[][20]) {
    if(n==0) {
        output[0][20] = 0;
        return 1;
    }
    else{
        int smallerArray = subset(input+1,n-1,output);
        for(int i=0;i<smallerArray;i++){
            int j= 0;
            while(output[i][j]!=-1){
                output[smallerArray+i][j+1] = output[i][j];
                j++;
            }
            output[smallerArray+i][0] = input[0];
        }
        return 2*smallerArray;
    }
}


int main() {
    int output[1000][20];
    for(int i=0;i<1000;i++){
        for(int j=0;j<20;j++){
            output[i][j] = -1;
        }
    }
    int input[3] = {1,2,2};
    int numberOfSubsets = subset(input,3,output);
    for(int i=0;i<numberOfSubsets;i++){
        int j = 0;
        while(output[i][j]!= -1){
            cout<<output[i][j]<<" ";
            j++;
        }
        cout<<endl;
    }
    return 0;
}