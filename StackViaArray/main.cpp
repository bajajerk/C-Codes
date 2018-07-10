#include <iostream>
using namespace std;

class StackViaArray{
    int  *data;
    int nextIndex;
    int capacity;

public:

    StackViaArray(int size){
        data =  new int[size];
        nextIndex = 0;
        capacity = size;
    }

    int size(){
        return nextIndex;
    }

    bool isEmpty(){
        return nextIndex==0;
    }

    void pop(){
        nextIndex--;
    }

    int top(){
        if(nextIndex<=0) {
            cout << "Not possible to get top element";
            return INT_MIN;
        }
        int temp  = data[nextIndex-1];
        return temp;
    }

    void insert(int number){
        if(nextIndex==capacity){
            cout<<"NOT POSSIBLE, Stack is full";
        }
        data[nextIndex] = number;
        nextIndex++;
    }

};

int main() {
    StackViaArray s(4);
    cout<<s.isEmpty()<<endl;
    s.insert(1);
    s.insert(2);
    cout<<s.top();
    s.insert(3);
    s.insert(4);
    s.insert(1);
}