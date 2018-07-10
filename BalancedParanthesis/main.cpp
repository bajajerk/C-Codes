#include <iostream>
#include<stack>
#include<string.h>
using namespace std;

bool checkBalanced(char *s) {
    int i=0;
    stack<int> stacky;

    while(i<strlen(s)){
        if(s[i]=='{' || s[i]=='[' || s[i]=='('){
            stacky.push(s[i]);
            i++;
        }
        else if(s[i]=='}'){
            if(stacky.empty()){
                return false;
            }
            else if(stacky.top()=='{'){
                stacky.pop();
                i++;
            }
            else{
                return false;
            }
        }
        else if(s[i]==']'){
            if(stacky.empty()){
                return false;
            }
            else if(stacky.top()=='['){
                stacky.pop();
                i++;
            }
            else{
                return false;
            }
        }
        else if(s[i]==')'){

            if(stacky.empty()){
                return false;
            }
            else if(stacky.top()=='('){
                stacky.pop();
                i++;
            }
            else{
                return false;
            }
        }
        else{
            i++;
        }
    }
    if(stacky.empty()){
        return true;
    }
    else{
        return false;
    }

}

int main() {
    string s= " { a + [ b+ (c + d)] + (e + f) }";
//    cin>>s;
    cout<<endl;
    cout<<checkBalanced(s);
    return 0;
}