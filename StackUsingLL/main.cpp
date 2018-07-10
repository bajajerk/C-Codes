
 
#include<iostream>
using namespace std;


template <typename T>
class Node {
    public :
    T data;
    Node<T> *next;
    
    Node(T data) {
        this -> data = data;
        next = NULL;
    }
};


template <typename T>
class Stack {
    Node<T> *head;
    int size;		// number of elements prsent in stack

public :

    Stack() {
    head = NULL;
    size = 0;
    }

    int getSize() {
    return size;
    }

    bool isEmpty() {
    return size==0;

    }

    void push(T element) {
    Node<T> *newNode= new Node<T>(element);
    if(head==NULL){
        head = newNode;
        size++;
    }
    else{
        newNode->next = head;
        size++;
    }
    }

    T pop() {
    if(size==0){
        return 0;
    }
    size--;
    T ans = head->data;
    head = head->next;
    return ans;
    }

    T top() {
        if(size==0){
            return 0;
        }
        return head->data;
    }
};

int main(){


    Stack<int> st;

    int choice;
    cin >> choice;
    int input;

    while (choice !=-1) {
        if(choice == 1) {
            cin >> input;
            st.push(input);
        }
        else if(choice == 2) {
            int ans = st.pop();
            if(ans != 0) {
                cout << ans << endl;
            }
            else {
                cout << "-1" << endl;
            }
        }
        else if(choice == 3) {
            int ans = st.top();
            if(ans != 0) {
                cout << ans << endl;
            }
            else {
                cout << "-1" << endl;
            }
        }
        else if(choice == 4) {
            cout << st.getSize() << endl;
        }
        else if(choice == 5) {
            cout << st.isEmpty() << endl;
        }
        cin >> choice;
    }

}

