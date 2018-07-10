#include <iostream>
#include<string.h>
using namespace std;

bool checksequenece(char large[] , char small[]) {
    int i=0;
    int j = 0;
    int largeSize = strlen(large);
    int smallSize = strlen(small);
    while(i<largeSize && j<smallSize){
        if(large[i] == small[j]){
            i++;
            j++;
        }
        else{
            i++;
        }

    }
    if(j==smallSize){
        return true;
    }
    else{
        return false;
    }
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}