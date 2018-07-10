#include <cmath>
#include <iostream>
#include<queue>
#include<stack>
using namespace std;

queue<int> reverseKElements(queue<int> input, int k) {
    stack<int> stacky;
    for(int i=1;i<=k;i++){
        stacky.push(input.front());
        input.pop();
    }
    queue<int> ans;
    while(!stacky.empty()){
        ans.push(stacky.top());
        stacky.pop();
    }
    while(!input.empty()){
        ans.push(input.front());
        input.pop();
    }
    return ans;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}