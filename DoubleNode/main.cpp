#include <iostream>
using namespace std;
class Node {
	public:
		int data;
		Node* next;

		Node(int data) {
			this->data = data;
			this->next = NULL;
		}
};

Node* takeInput() {
    Node * head = NULL;
    Node * tail = NULL;
    int element;
    cin>>element;
    while(element != -1){
        Node * newNode = new Node (element);
        if(head==NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else{
            // tail = newNode;
            tail->next =  newNode;
            tail = newNode;
        }
        cin>>element;
    }
    return head;
}

class Pair{
public:
    Node * head;
    Node * tail;
};


Pair reverseLL(Node *head) {
    if(head == NULL || head -> next == NULL) {
        Pair ans;
        ans.head = head;
        ans.tail = head;
        return ans;
//        return head;
    }

    Pair smallAns = reverseLL(head -> next);
    smallAns.tail->next = head;
    head->next  = NULL;
    return smallAns;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}