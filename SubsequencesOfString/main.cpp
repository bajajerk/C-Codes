#include <iostream>
#include<string>
using namespace std;

int subs(string input, string output[]) {
    if(input.size()==0){
        output[0]= ' ';
        return 1;
    }

    else{
        int bachaHuaKaLength = subs(input.substr(1),output);
        for(int i=0;i<bachaHuaKaLength;i++){
            output[bachaHuaKaLength+i] = input[0]+output[i];
        }
        return 2*bachaHuaKaLength;
    }
}

int main() {
//    std::cout << "Hello, World!" << std::endl;
    string s  = "ab";
    string output[234];
    int len = subs(s,output);
    for(int i=0;i<len;i++){
        cout<<output[i]<<endl;
    }
    return 0;
}