#include <iostream>
#include<string.h>
#include<math.h>
#include<stack>
using namespace std;

int countBracketReversals(char input[]){
    stack <int> stacky;
    if(strlen(input)%2!=0){
        return -1;
    }

    int i=0;
    while(i!=strlen(input)){
        if(input[i]=='{'){
            stacky.push(input[i]);
        }
        else if(input[i]=='}'){
            if(stacky.empty()){
                stacky.push(input[i]);
            }
            else if(stacky.top()=='{'){
                stacky.pop();
            }
            else if(stacky.top()=='}'){
                stacky.push(input[i]);
            }
        }
    }
    int count = 0;
    if(stacky.size()==0){
        return 0;
    }

    else{
        while(!stacky.empty()){
            char a = stacky.top();
            stacky.pop();
            char b = stacky.top();
            stacky.pop();
            if(a==b){
                count++;
            }
            else{
                count= count+2;
            }
          }
          return count;
    }

}


int main() {

    return 0;
}