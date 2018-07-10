#include <iostream>
#include<stack>
using namespace std;

class StackSpectial{
    stack<int> s;
    stack<int> maxElementStack;

public:
    void push(int element){
        if(s.empty()){
            s.push(element);
            maxElementStack.push(element);
        }
        else{
            if(element>maxElementStack.top()){
                s.push(element);
                maxElementStack.push(element);
            }
            else{
                s.push(element);
                maxElementStack.push(maxElementStack.top());

            }
        }
    }


    void remove_element(){
        s.pop();
        maxElementStack.pop();
    }

    int top(){
        return maxElementStack.top();
    }

};

int main() {
    int n;
    cin>>n;
    StackSpectial s;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(temp==1){
            int element;
            cin>>element;
            s.push(element);
        }
        else if(temp==2){
            s.remove_element();
        }
        else if (temp==3){
            cout<<s.top()<<endl;
        }
    }
//    StackSpectial s;
//    s.push(100);
//    s.push(12);
//    s.push(1000);
//    s.remove_element();
//    cout<<s.top();
    return 0;
}