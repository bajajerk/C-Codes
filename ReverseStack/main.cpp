#include <iostream>
#include <stack>
using namespace std;

void reverseStack(stack<int> &input, stack<int> &extra) {
    while(!input.empty()){
        extra.push(input.top());
        input.pop();
    }
    cout<<extra.top();

}

{{{{}}


int main() {
    stack<int> s;
    stack<int> t;
    s.push(1);
    s.push(2);
    s.push(3);
    reverseStack(s, t);
    return 0;
}