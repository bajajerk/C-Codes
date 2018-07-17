#include <iostream>
#include<queue>
using namespace std;
int main() {
    priority_queue <int> p;

//    p.push(1);
//    p.push(2);
//    p.push(3);
//    p.push(4);

    while(true){
        int element;
        cin>>element;
        if(element==-1){
            break;
        }
        p.push(element);
    }

    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }

//    cout<<p.top();

    return 0;
}