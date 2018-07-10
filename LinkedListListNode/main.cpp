#include <iostream>
using namespace std;

class ListNode{
	public:
	int data;
	ListNode* next;

    ListNode(int data) {
      this->data = data;
      this->next = NULL;
    }
};

//ListNode* newListNode(int data){
//	ListNode *temp = new ListNode;
//    	temp->data = data;
//    	temp->next = NULL;
//    	return temp;
//}

ListNode * takeInput() {
  ListNode * head = NULL;
  ListNode * tail = NULL;
  int element;
  cin>>element;
  while(element != -1){
    ListNode * newNode = new ListNode (element);
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

void printNode(ListNode * head){
  while(head!=NULL){
    cout<<head->data<<" ";
    head = head->next;
  }
}



int len(ListNode * head){
  int count = 0;
  while(head!=NULL){
    head = head->next;
    count++;
  }
  return count;
}

ListNode* ChangeHead(ListNode* head, int n){
  if(n==0 || head==NULL){
    return head;
  }
  int length = len(head);
  ListNode * newHead = head;
  ListNode * prevNewHead ;
  ListNode * nextNewHead =  head->next;
  for(int i=1;i<=length-n;i++){
    newHead = newHead->next;
    nextNewHead = nextNewHead->next;
    if(i==1){
      prevNewHead = head;
    }
    else{
      prevNewHead = prevNewHead->next;
    }
  }
  newHead ->next = head;
  prevNewHead ->next = nextNewHead;
  return newHead;
}


int main() {
  ListNode * head = takeInput();
//  printNode(head);
  ListNode * newHead = ChangeHead(head,2);
  printNode(newHead);
//  cout<<len(head);
  return 0;
}