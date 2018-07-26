#include <iostream>
#include <vector>
#include <queue>
using namespace std;



vector<int> mergeKSortedArrays(vector<vector<int>*> input){

    priority_queue<int, vector<int>, greater<int> > p;

    for(int i=0;i<input.size();i++){
        vector<int>* a = input[i];
        for(int j=0;j<a->size();j++){
            p.push(a->at(j));
        }
    }
    vector<int> ans;
    while(!p.empty()){
        ans.push_back(p.top());
        p.pop();
    }
    return ans;
}w

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}