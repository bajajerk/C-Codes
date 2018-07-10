#include <iostream>
using namespace std;

void PrintPattern(int m, int n){
    char arr[m][n];
    int upper=0;
    int lower=m-1;
    int left=0;
    int right = n-1;
    int helper=1;
    char value;


    while(upper<=lower && left<=right)
    {
        if(helper%2==1){
            value  = 'X';

        }
        else{
            value = 'O';
        }

        for(int i=left;i<=right;i++){
            arr[upper][i]=value;
        }
        upper++;


        for(int j=upper;j<=lower;j++){
           arr[j][right]=value;
        }
        right--;

        for(int i=right;i>=left;i--){
            arr[lower][i]=value;
        }

        lower--;

        for(int j=lower;j>=upper;j--){
            arr[j][left]=value;
        }
        left++;
        helper++;
    }
    for(int i = 0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main() {
    PrintPattern(3,4);
}