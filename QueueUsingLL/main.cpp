#include <iostream>
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



template<typename T>
class Queue {
private:
    Node<T> * head;
    Node<T> * tail;
    int size;

public :

    Queue() {
    this->size = 0;
    head = NULL;
    tail = NULL;

    }

    void enqueue(T data) {
    if(size==0){
        Node <T> * temp = new Node<T>(data);
        this->head = temp;
        this->tail = temp;
    }
    else{
        Node <T> * temp = new Node<T>(data);
        tail->next = temp;
        tail = tail->next;
    }
    size++;
    }

    int getSize() {
    return size;
    }

    bool isEmpty() {
    return this->size==0;

    }

    T dequeue() {
        if(size==0){
            return 0;
        }
        T saveIt = head->data;
        head = head->next;
        size--;
        return saveIt;
    }

    T front()  {
        if(size==0){
            return 0;
        }
        else{
            return head->data;
        }
    }
};

int main() {
    Queue <int> q;
    q.enqueue(12);
    cout<<q.getSize();
    cout<<q.isEmpty();
    cout<<endl;
    q.dequeue();
    cout<<endl;
    cout<<q.getSize();
    cout<<q.isEmpty();

    return 0;
}