#include <iostream>
#include<string>
#include<string.h>
using namespace std;

bool isPalindrome(long n){
    if(n/10==0){
        return  true;
    }
    string s  = to_string(n);
    string orignal = s;
    reverse(s.begin(), s.end());
    if(s == orignal){
        return  true;
    }
    return false;
}


long FindPairY(long num) {

    for(long i=0;i<9999999;i++){
        if(isPalindrome(num+i)){
            return i;
            break;
        }
    }
}
int main() {
cout<<FindPairY(101);
return 0;
}