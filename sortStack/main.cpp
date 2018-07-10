#include <iostream>
#include <stack>
using namespace std;

void sortStack(stack<int> &s){
    stack<int> helper;
    while(!s.empty()){
        int element  = s.top();
        s.pop();
        if(helper.empty()){
            helper.push(element);
        }
        else if(helper.top()<element){
            helper.push(element);
        }
        else if(helper.top()>element){
            while(helper.top()>element ){
                int out = helper.top();
                helper.pop();
                s.push(out);
                if(helper.size()==0){
                    break;
                }
            }
            helper.push(element);
        }
    }
    while(!helper.empty()){
        s.push(helper.top());
        helper.pop();
    }
}


int main() {
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(4);
    sortStack(s);
}