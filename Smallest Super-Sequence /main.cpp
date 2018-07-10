#include <iostream>
#include<string.h>
using namespace std;


int smallestSuperSequence(char s1[], int len1, char s2[], int len2) {
    if(len1==0){
        return len2;
    }
    if(len2==0){
        return len1;
    }
    if(s1[0]==s2[0]){
        return 1+smallestSuperSequence(s1+1,len1-1,s2+1,len2-1);
    }

    else{
        int x = 1+smallestSuperSequence(s1+1,len1-1,s2,len2);
        int y = 1+smallestSuperSequence(s1,len1,s2+1,len2-1);
        return min(x,y);

    }
}




int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}