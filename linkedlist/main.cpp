#include <iostream>
#include<map>
#include<math.h>
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

void printNode(Node * head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}


int getSize(Node * head){
    int count  = 0;
    while(head!=NULL){
        head = head->next;
        count++;
    }
    return count;
}

Node* append_LinkedList(Node* head,int k)
{

    int length = 1;
    Node*tail = head;
    while(tail->next!=NULL){
        tail = tail->next;
        length++;
    }
    cout<<"Tails is "<<tail->data<<endl;
    cout<<length;
    Node * newHead = head;
    Node * prevNewHead;
    for(int m = 1; m<=length-k;m++){
        if(m==1){
            prevNewHead = head;
        }
        else if(m>1){
            prevNewHead = prevNewHead->next;
        }
        newHead = newHead->next;
    }
    prevNewHead->next = NULL;
    tail->next  = head;
    return newHead;

}
    Node* eliminate_duplicate(Node* head)
    {
        Node * temp = head;
        while(temp!=NULL && temp->next!=NULL){
            if(temp->data==temp->next->data){
                Node * current = temp->next;
                while(current->data == temp->data ){
                    current = current->next;
                    if(current==NULL){
                        break;
                    }
                }
                temp->next = current;
            }
            temp=temp->next;
        }
        return head;
        //write your code here
    }


Node* arrange_LinkedList(Node* head)
{
    Node * oddHead = NULL;
    Node * evenHead = NULL;
    Node * oddTail = NULL;
    Node * evenTail = NULL;

    while(head!=NULL){

        if(head->data%2!=0){
            if(oddHead==NULL && oddTail==NULL){
                oddHead = head;
                oddTail = head;
            }
            else{
                oddTail->next = head;
                oddTail = oddTail->next;
            }
        }
        else if(head->data%2==0){
            if(evenHead==NULL && evenTail==NULL){
                evenHead = head;
                evenTail = head;
            }
            else{
                evenTail->next = head;
                evenTail = evenTail->next;
            }
        }
        head=head->next;
    }
    oddTail->next = evenHead;
    evenTail->next = NULL;
    return oddHead;
}

Node* skipMdeleteN(Node  *head, int M, int N) {
    Node * ans = head;
    while(head!=NULL){
        for(int i=1;i<=M-1;i++){
            if(head==NULL){
                return ans;
            }
            head = head->next;
        }
        Node * jumper = head;
        for(int k=1;k<=N;k++){
//            if(jumper==NULL || jumper->next==NULL){
//                head->next = jumper;
//                return ans;

            jumper = jumper->next;
            if(jumper==NULL){
                head->next = NULL;
                return ans;
            }
        }
        head->next = jumper->next;
        head = head->next;
    }
    return ans;

}

Node* swap_nodes(Node *head,int n1,int n2)
{
    if(n1==0){
        Node * prevSecond = NULL;
        Node * second = head;
        for(int i=1;i<=n2;i++){
            if(prevSecond==NULL){
                prevSecond = head;
            }
            else{
                prevSecond = prevSecond->next;
            }
            second = second->next;
        }
        Node *nextHead = head->next;
        prevSecond->next = head;
        head->next = second->next;
        second->next = nextHead;
        return second;

    }
    Node * prevFirst = NULL;
    Node * first = head;
    for(int i = 1;i<=n1;i++){
        if(i==1){
            prevFirst = head;
            first = first->next;
        }
        else{
            first = first->next;
            prevFirst = prevFirst->next;
        }
    }

    Node * second = head;
    Node* nextSecond = head->next;
    for(int i = 1;i<=n2;i++){
            second = second->next;
            nextSecond = nextSecond->next;

    }
//    Node * nextNextSecond = nextSecond->next;
//        cout<<second->data;
    prevFirst->next = second;
    second->next = first;
    first->next = nextSecond;
    return head;

}

Node* kReverse(Node*head,int n)
{
    Node * prev =NULL;
    Node * current = head;
    Node * next = NULL;
    int count = 0;

    while(current!=NULL && count<n){
        count++;
        next = current->next;
        current->next = prev;
        prev= current;
        current = next;
    }

//    prev is the new head

    if(next!=NULL){
        head->next = kReverse(next,n);
    }
    return prev;

}

void ReversePrint(Node * head){
    if(head==NULL){
        return;
    }
    ReversePrint(head->next);
    cout<<head->data<<" ";
}
void AlternatingSplit(Node* head) {
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node * tail2 = NULL;

    Node * current = head;
    int i=1;
    while(current!=NULL){
        if(i%2==1) {
            if (head1 == NULL) {
                head1 = current;
                tail1 = current;
            } else {
                tail1->next = current;
                tail1 = current;

            }
        }
        else{
            if (head2 == NULL) {
                head2 = current;
                tail2 = current;
            } else {
                tail2->next = current;
                tail2 = current;

            }
        }
        i++;
        current = current->next;
    }
    tail1->next = NULL;
    tail2->next = NULL;


    ReversePrint(head1);
    cout<<endl;
    ReversePrint(head2);

}

Node *compute(Node *head)
{
    Node *ans = NULL;
    Node * saver = NULL;
    while(head!=NULL && head->next!=NULL) {
        if (head->next->data > head->data) {
            head = head->next;
        }
        else {
            if (ans == NULL) {
                ans = head;
                saver = ans;
                head = head->next;
            } else {
                ans->next = head;
                ans = ans->next;

                head = head->next;
            }
        }
    }
    if(ans==NULL){
        ans = head;
        saver  = ans;
        ans->next = NULL;
    }
    else{
        ans->next = head;
        ans->next->next = NULL;
    }

        return saver;
    }

Node *unionOf2LL(Node *head1,Node *head2)
{
    map <int,int > mappy;
    Node * unny = NULL;
    Node * ans  = unny;
    while(head1!=NULL){
            mappy[head1->data]++;
            if(unny==NULL){
                unny = head1;
                ans = unny;
            }
            else{
                unny->next = head1;
                unny = unny->next;
            }
        head1 = head1->next;
    }

    while(head2!=NULL){
        if(mappy[head2->data]<=0){
//            mappy[head2->data]--;
            if(unny==NULL){
                unny = head2;
                ans = unny;
            }
            else{
                unny->next = head2;
                unny = unny->next;
            }
        }
        else{
            mappy[head2->data]--;
        }
        head2 = head2->next;
    }
    unny->next = NULL;

    return ans;
}


Node * getMid (Node * head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node * slow = head;
    Node * fast  = head;
//    cout<<"hi";
    while(fast!=NULL &&  fast->next!=NULL &&  fast->next->next!=NULL ){
        slow = slow ->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* reverseList(Node *head) {
    if(head == NULL || head -> next == NULL) {
        return head;
    }

    Node *smallAns = reverseList(head -> next);

    Node *tail = head -> next;
    tail -> next = head;
    head -> next = NULL;
    return smallAns;
}

bool check_palindrome(Node *head ){

//    cout<<head->data;
    Node * midOfNode  = getMid(head);
//    cout<< midOfNode->data;
    Node * head2  = reverseList(midOfNode);
        int size = getSize(head);
        for(int i=1;i<=size;i++){
            if(head->data  == head2->data){
                head = head->next;
                head2 = head2->next;
            }
            else{
                return false;
            }
        }
    return true;
}


Node *moveThatElement(Node * head, int n){
    if(head==NULL){
        return head;
    }
    Node *doIt = moveThatElement(head->next,n);
    if(head->data!=n){
        head->next = doIt;
        return head;
    }
    else{
        Node * tail = doIt;
        while(tail->next!=NULL){
            tail = tail->next;
        }
        tail->next = head;
        head->next = NULL;
        return doIt;
    }

}

Node * rearrange(Node *head){
    if(head==NULL || head->next == NULL){
        return head;
    }
    Node * temp = head;
    Node * saveHead = NULL;
    Node * saveTail  = NULL;
    while(temp!=NULL){
        Node * saving = new Node(temp->data);
        if(saveHead==NULL){
            saveHead = saving;
            saveTail = saving;
        }
        else{
            saveTail->next = saving;
            saveTail = saveTail->next;
        }
        temp = temp->next;
    }
    Node * rev = reverseList(head);
    int size = getSize(rev);

    Node * ansTail = saveHead;
    Node * saveit = ansTail;
    saveHead = saveHead->next;
    int i = 1;
    while(i<size){
        if(i%2==0){
            ansTail->next = saveHead;
            ansTail = ansTail->next;
            saveHead = saveHead->next;
        }
        else{
            ansTail->next = rev;
            ansTail = ansTail->next;
            rev = rev->next;
        }
        i++;
    }
    ansTail->next = NULL;
    return saveit;

}
Node *rearrangeEvenOdd(Node *head) {
    if(head==NULL|| head->next == NULL){
        return head;
    }
    Node * oddHead = head;
    Node * oddTail = head;
    Node * evenHead = head->next;
    Node * evenTail = head->next;




}

int decimal(Node *head) {
    int length = getSize(head);
    int mulFactor = pow(2,length-1);
    int ans = 0;
    while(head!=NULL){
        ans+= head->data * mulFactor;
        mulFactor = mulFactor/2;
        head= head->next;
    }

    return ans;
}

Node* bubble_sort_LinkedList_itr(Node* head)
{
    if(head==NULL || head->next==NULL){
        return head;
    }

    for(int i=0;i<4;i++) {

        Node *previous = head;
        Node *current = head->next;
        Node *nexus = head->next->next;

        if (head->data < head->next->data) {

            //initialised varible and current no need to chaneg


        } else {
            current->next = previous;
            previous->next = nexus;
            head = current;

            previous = head;
            current = head->next;
            nexus = head->next->next;
        }


        while (nexus != NULL) {
            if (nexus->data >= current->data) {
                previous = previous->next;
                current = current->next;
                nexus = nexus->next;
            } else {
                current->next = nexus->next;
                previous->next = nexus;
                nexus->next = current;

                previous = nexus;
                nexus = current->next;
            }
        }
    }
    return head;
}




Node * removeDuplicates(Node * head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    map <int,int> mappy;
    mappy[head->data]++;
    Node * current = head->next;
    Node * prev = head;

    while(current!=NULL){
        if(mappy[current->data]<=0){
            mappy[current->data]++;
            prev = prev->next;
            current = current->next;

        }
        else{
            prev->next = current->next;
            current = current->next;
        }
    }

    return head;
}


Node * LastAppearance(Node * head){
    head = reverseList(head);
    head = removeDuplicates(head);
    head = reverseList(head);
    return head;
}


Node* NextLargeNumber(Node *head) {
    Node * reversed = reverseList(head);
    Node * temp = reversed;
    if(reversed->data!=9){
        reversed->data = reversed->data+1;
        return reverseList(reversed);
    }

    else if(reversed->data==9){
        while(reversed->data==9 ){
            reversed->data = 0;
            reversed = reversed->next;
            if(reversed==NULL){
                break;
            }
        }
        if(reversed==NULL){
            Node * extraNumber = new Node(1);
            extraNumber->next = temp;
            return extraNumber;
        }
        else{
            reversed->data = reversed->data+1;
            return reverseList(temp);
        }
    }
}

Node* swapEveryPair(Node *head) {
    if(head==NULL|| head->next==NULL){
        return head;
    }
    Node * swapper  = swapEveryPair(head->next->next);
    Node * agla = head->next;
    agla->next =head;
    head->next =swapper;
    return agla;
}


Node* mergeTwoLLs(Node *head1, Node *head2) {
    Node * ansHead = NULL;
    Node * ansTail  = NULL;
    while(head1!=NULL && head2!=NULL){
        if(head1->data <head2->data){
            if(ansTail==NULL){
                ansHead = head1;
                ansTail = head1;
            }
            else{
                ansTail ->next = head1;
                ansTail = ansTail->next;
            }
            head1 = head1->next;
        }
        else{
            if(ansTail==NULL){
                ansHead = head2;
                ansTail = head2;
            }
            else{
                ansTail ->next = head2;
                ansTail = ansTail->next;
            }
            head2 = head2->next;
        }
    }
    if(head1!=NULL){
        ansTail->next = head1;
    }
    if(head2!=NULL){
        ansTail->next = head2;
    }
//    ansTail->next = NULL;
    return ansHead;
}

Node *mergeSort(Node * head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    Node * mid = getMid(head);
    Node * rightstart = mid->next;


    mid->next = NULL;
    Node * mergedLeft  = mergeSort(head);
    Node * mergedRight = mergeSort(rightstart);

    Node * ans = mergeTwoLLs(mergedLeft,mergedRight);
    return ans;

}

Node * deleteNode(Node * head, int n){
    if(n==0){
        return head->next;
    }
    else{
        Node * temp = deleteNode(head->next,n-1);
        head->next = temp;
        return head;

    }
}


bool compare_lists(Node* head1, Node* head2) {
    if(head1==NULL && head2==NULL){
        return true;
    }
    if(head1==NULL && head2!=NULL){
        return false;
    }
    if(head1!=NULL && head2==NULL){
        return false;
    }
    if(head1->data == head2->data){
        return compare_lists(head1->next,head2->next);
    }
    else{
        return false;
    }

}
int main() {
    Node * head = takeInput();
    Node * head1 = takeInput();


    bool ans = compare_lists(head,head1);
    cout<<ans;
//    printNode(ans);
//    cout<<ans->data;
//        cout << getSize(head);

//    Node * head1 = takeInput();
//    printNode(head);

//        AlternatingSplit(head);

    return 0;
}