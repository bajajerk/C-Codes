#include <iostream>
#include<string>
#include<map>
using namespace std;

int main() {
    string s;
    cin>>s;
    map<char,int> mappy;

    for(int i=0;i<s.size();i++){
        mappy[s[i]]++;
    }
    char a = 'a';
    for(int i=0;i<26;i++){
        for(int i=0;i<mappy[a];i++){
            cout<<a;
        }
        a = a+1;
    }
}