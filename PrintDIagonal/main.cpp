#include <iostream>
using namespace std;

void PrintDiagonals(int **arr, int row, int col){

    //go up to down
    for(int i=0;i<row;i++){
        cout<<arr[i][0]<<" ";
        int k = i -1;
        int l = 0+1;

//        navigate it
        while(k>=0 && l<col){
            cout<<arr[k][l]<<" ";
            k--;
            l++;
        }
        cout<<endl;
    }

//    Go left to right
        for(int i =1;i<col;i++){
        cout<<arr[row-1][i]<<" ";

            int k = row-1 -1;
            int l = i+1;
            while(k>=0 && l<col){
                cout<<arr[k][l]<<" ";
                k--;
                l++;
            }
            cout<<endl;


    }
}



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}