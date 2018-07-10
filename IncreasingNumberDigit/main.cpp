#include <iostream>
using namespace std;


void printHelper(int numberOfDigits, int outputSoFar,int startNumber){
    if(numberOfDigits==0){
        cout<<outputSoFar<<" ";
        return ;
    }
    for(int i=startNumber;i<=9;i++){
        if(outputSoFar%10<i){
            printHelper(numberOfDigits-1,outputSoFar*10 + i,startNumber+1);
        }
    }

}

void printIncreasingNumbers(int n) {
   printHelper(n,0,1);
}


int main() {
printIncreasingNumbers(2);
}