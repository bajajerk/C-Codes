#include <iostream>
#include<map>
#include<vector>
#include<stack>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

Node * takeInput(){
    int k;
    cin>>k;
    if(k==-1){
            return NULL;
        }
    else{
        Node * head = new Node(k);
        head->next = takeInput();
        return head;
    }
};

void printNode(Node * head){
    if(head==NULL){
        return;
    }
    else{
        cout<<head->data<<"  ->  ";
        printNode(head->next);
    }
}

int lengthOfLL(Node * head){
    if(head==NULL){
        return 0 ;
    }
    else{
        return 1+lengthOfLL(head->next);
    }
}

Node * reverseRecursively(Node * head){
    if(head== nullptr)
        return NULL;
    if(head->next== nullptr)
        return head;
    Node * aageReverse = reverseRecursively(head->next);
    Node * temp = aageReverse;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = head;
    head->next = NULL;
    return aageReverse;
}

Node * reverseRecursivelyOptimised(Node * head){
    if(head== nullptr)
        return NULL;
    if(head->next== nullptr)
        return head;
    Node * aageReverse = reverseRecursively(head->next);
    head->next->next = head;
    head->next = NULL;

    return aageReverse;
}

Node* middleNode(Node* head) {
    Node* fast = head;
    Node * slow = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

bool isPalindrome(Node* head) {
    Node * midNode = middleNode(head);
    Node * middAfterReversed = reverseRecursively(midNode);
    while(head!=NULL && middAfterReversed!= NULL){
        if(head->data != middAfterReversed->data){
            return false;
        }
        head= head->next;
        middAfterReversed = middAfterReversed->next;
    }
    return true;
}

Node* removeElements(Node* head, int val) {
    if(!head){
        return NULL;
    }
    if(head->data==val){
        return removeElements(head->next,val);
    }
    else{
        head->next = removeElements(head->next,val);
    }
    return  head;

}

Node *getIntersectionNode(Node *headA, Node *headB) {
    map<Node*,int> mappy;
    while(headA!=NULL){
        mappy[headA]++;
        headA=  headA->next;
    }
    while(headB!=NULL){
        if(mappy[headB]>0){
            return headB;
        }
        headB=  headB->next;
    }

}

Node* reverseBetween(Node* head, int l1, int l2) {
    Node* prevRev = head;

}

Node* rotateRight(Node* head, int k) {
    int length = lengthOfLL(head);
    if(k>length){
        length = k%length;
    }
    Node * temp = head;
    for(int i=0;i<length-k-1;i++){
        temp = temp->next;
    }
    Node * ending = temp;
    Node  *newHead = ending->next;
    Node * tail = ending;
    while(tail->next!= nullptr){
        tail = tail->next;
    }
    tail->next = head;
    ending->next = nullptr;
    return newHead;
}
vector<int> nextLargerNodes(Node* head) {
    vector<int> ans2;
    if(!head)
        return ans2;
    stack<Node*> s;
    Node * temp = head;
    s.push(head);
    head = head->next;
    while(head){
        int value = head->data;
        while(!s.empty() && s.top()->data < value)
        {
            s.top()->data = value;
            s.pop();
        }
        s.push(head);
        head = head->next;
    }
    while(!s.empty()){
        s.top()->data = 0;
        s.pop();
    }
    while(temp){
        ans2.push_back(temp->data);
        temp = temp->next;
    }
    return ans2;
}

Node* reorderList(Node* head) {
    Node * midNode  = middleNode(head);
    Node * reversedRIghtHand = reverseRecursivelyOptimised(midNode->next);
//    printNode(reversedRIghtHand);
    midNode->next = nullptr;
    Node * temp = head;
    Node * saveit;
//    cout<<reversedRIghtHand->next->data<<endl<<endl;
    while(temp && reversedRIghtHand){
        saveit = temp->next;
        Node * saveRight2 = reversedRIghtHand->next;
        temp->next = reversedRIghtHand;
        temp->next->next = saveit;
        reversedRIghtHand = saveRight2;
//        if(reversedRIghtHand== nullptr)
//            cout<<"ni hai";
        temp = temp->next->next;
//        return head;

    }
    return head;
}
Node* alterList(Node* headA, Node* headB) {
//    cout<<"done";

    Node * oddhead = nullptr;
    Node * oddtail = nullptr;
    Node * evenhead = nullptr;
    Node * eventail = nullptr;
//    cout<<"done";

    map<int,int> mappy;
    while(headA!=NULL){
        mappy[headA->data]++;
        headA = headA->next;
    }
//    cout<<"done";

    while(headB!=NULL){
//        cout<<"hi";
        if(mappy[headB->data]>0){
//            cout<<"hi2";

            mappy[headB->data]--;
            if(headB->data%2!=0){
                if(!oddtail){
                    oddtail = headB;
                }
                else{
                    oddtail->next = headB;
                    oddtail = oddtail->next;
//                    cout<<"??";
                }

                if(!oddhead){
                    oddhead = headB;
                }
            }
            else if(headB->data%2==0){
                if(!eventail){
                    eventail = headB;
                }
                else{
                    eventail->next = headB;
                    eventail = eventail->next;

                }
                if(!evenhead){
                    evenhead = headB;
                }
            }

    }
        headB = headB->next;
    }

    if(oddhead && evenhead){
        oddtail->next = evenhead;
        eventail->next = NULL;
        return oddhead;
    }
    else if (oddhead && !evenhead){
        oddtail->next = nullptr;
        return oddhead;
    }
    else if (!oddhead && evenhead){
        eventail->next = nullptr;
        return evenhead;
    }
    else{
        return nullptr;
    }

//    cout<<oddhead->data<<"    "<<evenhead->data;
//    return nullptr;

}

Node* addKNodes(Node *head, int k) {
    int sum = 0;
    int i = 0;
    Node * temp = head;
    while(temp){
        sum+=temp->data;
        i++;
      if(i==k){
          Node * newnode = new Node(sum);
          sum = 0;
          i = 0;
          Node * saveit = temp->next;
          temp->next = newnode;
          newnode->next = saveit;
          temp = temp->next->next;
      }
      else{
          temp = temp->next;

      }
    }
    Node *last = head;

    while(last->next!= nullptr){
        last = last->next;
    }
    if(sum!=0){
//        cout<<"???????";
//        cout<<last->data<<endl<<sum<<endl;
        Node * newnode = new Node(sum);
//        Node * saveit = temp->next;
        last->next = newnode;
        last->next->next = nullptr;
    }
    return head;
}

Node *AddNafterMnodes(Node *head, int n, int m) {

}

int main() {
    Node * head = takeInput();
    Node * ans = addKNodes(head,3);
    printNode(ans);
//    cout<<getIntersectionNode(head,head2)->data;
//    vector<int> asn = nextLargerNodes(head); 1 2 3 4 5 7 8 -1
// 2 4 4 7 8 10 -1
//    for(int i=0;i<asn.size();i++){
//        cout<<asn[i]<<endl;
//    }
//    Node * reorderList1 = reorderList(head);
//    printNode(reorderList1);
//    cout<<middleNode(head)->data;

    return 0;
}