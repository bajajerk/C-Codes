#include <iostream>
using namespace std;

int* readRowsAlternatively(int **input, int row, int col){
    int * ans  = new int[row*col];
    int ansArrayIndex= 0 ;
    int putter = 1;
    for(int i = 0 ;i<row;i++){
        if(putter%2==1){
            for(int j = 0;j<col;j++){
                ans[ansArrayIndex] = input[i][j];
                ansArrayIndex++;
            }
        }
        else{
            for(int j = col-1;j>=0;j--){
                ans[ansArrayIndex] = input[i][j];
                ansArrayIndex++;
            }
        }
        putter++;
    }

}






int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}