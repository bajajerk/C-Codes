#include <iostream>
#include<string.h>
using namespace std;

void trimSpaces(char input[]) {
    int len = strlen(input);
    int k = 0;
    while(input[k]!='/0'){
        if(input[k]!= ' '){
            k++;
        }
        else{
            int j = k;
            while(j+1<len){
                input[j] = input[j+1];
            }
            k++;
        }
    }


}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}