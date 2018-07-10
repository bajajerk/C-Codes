#include <iostream>
#include<queue>
using namespace std;



////Making push costly
//template <typename T>
//class Stack{
//public:
//    queue<T> * q1 = new queue<T>;
//    queue<T> *helper = new queue<T>;
//
//   void push(T element){
//       if(q1->empty()){
//           q1->push(element);
//       }
//       else{
//           while(!q1->empty()){
//               helper->push(q1->front());
//               q1->pop();
//           }
//           q1->push(element);
//           while(!helper->empty()){
//               q1->push(helper->front());
//               helper->pop();
//           }
//       }
//   }
//
//   T top(){
//       return q1->front();
//   }
//
//   T pop(){
//       if(q1->size()==0){
//           return 0;
//       }
//       T a  = q1->front();
//       q1->pop();
//       return a;
//   }
//
//
//   T getSize(){
//       return q1->size();
//   }
//};



//Making pop costly
template <typename T>
class Stack{
public:
    queue<T> * q1 = new queue<T>;
    queue<T> *helper = new queue<T>;

    void push(T element){
//        if(q1->empty()){
//            q1->push(element);
//        }
//        else{
//            while(!q1->empty()){
//                helper->push(q1->front());
//                q1->pop();
//            }
            q1->push(element);
//            while(!helper->empty()){
//                q1->push(helper->front());
//                helper->pop();
//            }
//        }
    }

    T top(){
        if(q1->size()==0){
            return 0;
        }
        while(q1->size()!=1){
            helper->push(q1->front());
            q1->pop();
        }

        T ans = q1->front();
        q1->pop();

        while(!helper->empty()){
            q1->push(helper->front());
            helper->pop();
        }

        q1->push(ans);
        return ans;
    }

    T pop(){
        if(q1->size()==0){
            return 0;
        }
        while(q1->size()!=1){
            helper->push(q1->front());
            q1->pop();
        }

        T ans = q1->front();
        q1->pop();

        while(!helper->empty()){
            q1->push(helper->front());
            helper->pop();
        }

        return ans;
    }


    T getSize(){
        return q1->size();
    }
};

int main() {
    Stack <int>s;
    s.push(1);
    s.push(2);
    cout<<s.top()<<endl;
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.top();

//    cout<<s.q1->front();
//    while(!s.q1 -> empty()) {
//        cout << s.q1 -> front() << " ";
//        s.q1 -> pop();
//    }

}