#include <iostream>
using namespace std;




//Incomplete
class QueueByArray{
    int * data;
    int firstIndex;
    int nextIndex;
    int size;
    int capacity;

    QueueByArray(int capacity){
        data = new int[capacity];
        this->capacity = capacity;
        size = 0;
        int firstIndex = -1;
        int nextIndex = 0;
    }

    void enqueue(int element){
        data[nextIndex] = element;
        nextIndex++;
        if(this->firstIndex>=this->size ){

        }
        firstIndex++;
        size++;
    }

};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}