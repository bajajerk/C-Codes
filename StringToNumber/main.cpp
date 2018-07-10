#include <iostream>
using namespace std;

int helper(char input[],int endIndex){
    if(endIndex<0){
        return 0;
    }
    int asCiiof1 = '1' +0;

//    cout<<input[endIndex]<<endl;
    int ans = input[endIndex] - asCiiof1 +1;
    cout<<ans<<endl;
    int bachaHua = helper(input,endIndex-1);
    ans = ans + bachaHua*10;
    return ans;
}

int stringToNumber(char input[]) {
    int len  = strlen(input);
    return helper(input, len-1 );
}



int main() {
    char a[1]  = {'2'};
    cout<<stringToNumber(a);
    return 0;
}