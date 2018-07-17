#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void swap(int &a ,int &b){
    int temp = a;
    a = b;
    b = temp;
    return;
}
class PriorityQueue {
    vector<int> pq;

    public :

    PriorityQueue() {

    }

    bool isEmpty() {
        return pq.size() == 0;
    }

    // Return the size of priorityQueue - no of elements present
    int getSize() {
        return pq.size();
    }

    int getMin() {
        if(isEmpty()) {
            return 0;		// Priority Queue is empty
        }
        return pq[0];
    }

    void insert(int element) {
        pq.push_back(element);

        int childIndex = pq.size() - 1;

        while(childIndex > 0) {
            int parentIndex = (childIndex - 1) / 2;

            if(pq[childIndex] < pq[parentIndex]) {
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            }
            else {
                break;
            }
            childIndex = parentIndex;
        }

    }

    int removeMin() {

        int ans = pq[0];
        pq[0] = pq[pq.size() - 1];
        pq.pop_back();

        int parentIndex = 0;
        int leftChild = 2*(parentIndex) + 1;
        int rightChild = 2*(parentIndex)+1;

        int size = pq.size();
        while(leftChild<size){
            int minIndex = parentIndex;

            if(pq[leftChild]< pq[minIndex]){
                minIndex = leftChild;
            }

            if(rightChild < size && pq[rightChild]< pq[minIndex]){
                minIndex = rightChild;
            }

            if(minIndex==parentIndex){
                break;
            }

            swap(pq[minIndex], pq[parentIndex]);

            parentIndex = minIndex;
            leftChild = 2*(parentIndex) + 1;
            rightChild = 2*(parentIndex)+1;
        }

        return ans;

    }


};





void setTheArray(int a[], int n, int k){
    int parentIndex = (k-1)/2;

    while(k>0  && a[parentIndex]> a[k]) {
        int temp = a[parentIndex];
        a[parentIndex] = a[k];
        a[k] = temp;
        k = parentIndex;
        parentIndex = (k-1)/2;
    }
    return;

}

void heapifyArray(int a[] , int n){

//For insertion
    for(int i=1;i<n;i++){
        int parentIndex = (i-1)/2;
        if(a[parentIndex]<a[i]){
            cout<<"K";
            continue;
        }
        setTheArray(a,n,i);
    }

    return;
}




void setArrayWithDeletion(int a[], int n){

    for(int uptillThis = n-1; uptillThis>=0; uptillThis--){
        int temp = a[0];
        a[0] = a[uptillThis];
        a[uptillThis] = temp;
        cout<< a[0]<<" && "<<a[uptillThis]<<endl;
        heapifyArray(a,uptillThis);

    }
}




int main() {



//    int n ;
//    cin>>n;
//    int a[n];
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//    }
//    heapifyArray(a,n);
//    for(int i=0;i<n;i++){
//        cout<<a[i]<<endl;
//    }
//
//    cout<<endl;
//
//    setArrayWithDeletion(a,n);
//    for(int i=0;i<n;i++){
//        cout<<a[i]<<endl;
//    }
//    PriorityQueue pq;
//    int choice;
//    cin >> choice;
//    while(choice != -1) {
//        switch(choice) {
//            case 1 : // insert
//                int element;
//                cin >> element;
//                pq.insert(element);
//                break;
//            case 2 : // getMin
//                cout << pq.getMin() << endl;
//                break;
//            case 3 : // removeMin
//                cout << pq.removeMin() << endl;
//                break;
//            case 4 : // size
//                cout << pq.getSize() << endl;
//                break;
//            case 5 : // isEmpty
//                if(pq.isEmpty()) {
//                    cout << "true" << endl;
//                }
//                else {
//                    cout << "false" << endl;
//                }
//            default :
//                return 0;
//        }
//        cin >> choice;
//    }
}

//1 3 1 4 1 63 1 21 1 9 2 4 3 2