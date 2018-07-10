#include <iostream>
#include<map>
using namespace std;

char nonRepeatingCharacter(string s){
    map <char,int> mappy;
    for(int i=0;i<s.size();i++){
        mappy[s[i]]++;
    }
    for(int i=0;i<s.size();i++){
        if(mappy[s[i]]==1){
            return  s[i];
        }
    }

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}