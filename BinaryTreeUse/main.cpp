#include <iostream>
#include<queue>
#include <math.h>
#include<vector>
#include<map>
#include<set>
using namespace std;
template <typename T>
class BinaryTreeNode {
public:
    T data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~BinaryTreeNode() {
        delete left;
        delete right;
    }
};

class PairAns {
public :
    int min;
    int max;
};

template <typename T>
class node{
public:
    T data;
    node<T> * next;
    node(T data){
        this->data=data;
        this->next=NULL;
    }
};

node<int> * reverseList(node <int> * head ){
    if(head==NULL || head->next == NULL){
        return head;
    }
    node <int> * temp = reverseList(head->next);
    node<int> * tail = temp;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    tail->next = head;
    head->next = NULL;
    return temp;
}

BinaryTreeNode<int>* takeInputLevelWise() {
    int rootData;
    cout << "Enter root data" << endl;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);

    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0) {
        BinaryTreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter left child of " << front->data << endl;
        int leftChildData;
        cin >> leftChildData;
        if (leftChildData != -1) {
            BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftChildData);
            front->left = child;
            pendingNodes.push(child);
        }
        cout << "Enter right child of " << front->data << endl;
        int rightChildData;
        cin >> rightChildData;
        if (rightChildData != -1) {
            BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightChildData);
            front->right = child;
            pendingNodes.push(child);
        }
    }
    return root;
}

void printTree(BinaryTreeNode<int>* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << ":";
    if (root->left != NULL) {
        cout << "L" << root->left->data;
    }

    if (root->right != NULL) {
        cout << "R" << root->right->data;
    }
    cout << endl;
    printTree(root->left);
    printTree(root->right);
}

BinaryTreeNode<int>* takeInput() {
    int rootData;
    cout << "Enter data" << endl;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int>* leftChild = takeInput();
    BinaryTreeNode<int>* rightChild = takeInput();
    root->left = leftChild;
    root->right = rightChild;
    return root;
}

void printLevelWise(BinaryTreeNode<int> *root) {
    if(root==NULL){
        return;
    }
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(!pendingNodes.empty()){
        BinaryTreeNode <int> * workOnMe = pendingNodes.front();
        pendingNodes.pop();
        cout<<workOnMe->data<<":";

        if(workOnMe->left!=NULL){
            cout<<"L:"<<workOnMe->left->data<<",";
            pendingNodes.push(workOnMe->left);
        }
        if(workOnMe->left==NULL){
            cout<<"L:"<<"-1,";
        }

        if(workOnMe->right!=NULL){
            cout<<"R:"<<workOnMe->right->data;
            pendingNodes.push(workOnMe->right);
        }
        if(workOnMe->right==NULL){
            cout<<"R:"<<"-1";
        }
        cout<<endl;
    }

}

bool isNodePresent(BinaryTreeNode<int>* root, int x) {
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }
    bool a  = isNodePresent(root->left,x);
    bool b  = isNodePresent(root->right,x);
    return a||b;

}

int height(BinaryTreeNode<int> *root) {
    if(root==NULL){
        return 0;
    }
    return 1+max(height(root->left), height(root->right) );

}

void mirrorBinaryTree(BinaryTreeNode<int>* root) {
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        return;
    }
    mirrorBinaryTree(root->left);
    mirrorBinaryTree(root->right);
    BinaryTreeNode<int> * temp = root->left;
    root->left = root->right;
    root->right = temp;
}

bool isBalanced(BinaryTreeNode<int> *root) {
    if(root== NULL){
        return true;
    }


    int lHeight = height(root->left);
    int rHieght = height(root->right);

    if(abs(lHeight-rHieght) > 1){
        return false;
    }
    bool a = isBalanced(root->left);
    bool b = isBalanced(root->right);
    return a&&b;
}


PairAns minMax(BinaryTreeNode<int> *root) {

    if(root==NULL){
        PairAns p;
        p.max  = INT_MIN;
        p.min  = INT_MAX;
        return p;
    }

    PairAns leftAnswer = minMax(root->left);
    PairAns rightAnswer = minMax(root->right);
    PairAns p;
    p.max  = max(root->data,max( leftAnswer.max,rightAnswer.max) );
    p.min  = min(root->data,min(leftAnswer.min,rightAnswer.min));
    return p;
}

BinaryTreeNode<int>* removeLeafNodes(BinaryTreeNode<int> *root) {
    if(root->right == NULL && root->left==NULL){
        return NULL;
    }
    else if(root->right == NULL && root->left!=NULL){
        root->left = removeLeafNodes(root->left);
        return root;
    }
    else if(root->right != NULL && root->left==NULL){
        root->right = removeLeafNodes(root->right);
        return root;
    }
    else if(root->right != NULL && root->left!=NULL){
        root->left  = removeLeafNodes(root->left);
        root->right  = removeLeafNodes(root->right);
        return root;
    }
}

void printLevelATNewLine(BinaryTreeNode<int> *root) {

    if(root==NULL){
        return;
    }
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    BinaryTreeNode<int> * temp = NULL;
    pendingNodes.push(temp);
    while(!pendingNodes.empty()){
        BinaryTreeNode <int> * workOnMe = pendingNodes.front();
        pendingNodes.pop();
        if(workOnMe==NULL){
            if(pendingNodes.size()==0){
                return;
            }
            BinaryTreeNode<int> * temp = NULL;
            pendingNodes.push(temp);
            cout<<endl;
        }
        else{
            cout<<workOnMe->data<<" ";
            if(workOnMe->left!=NULL){
                pendingNodes.push(workOnMe->left);
            }
            if(workOnMe->right!=NULL){
                pendingNodes.push(workOnMe->right);
            }

        }
    }
}
vector< vector <int> > ans ;
void allPaths(BinaryTreeNode <int> * root , vector<int> uptillNow){
        if(root==NULL){
        ans.push_back(uptillNow);
        return;
    }
    if(root->right==NULL  && root->left==NULL){
        uptillNow.push_back(root->data);
        ans.push_back(uptillNow);
        return;
    }
    uptillNow.push_back(root->data);
        allPaths(root->left,uptillNow);
    allPaths(root->right,uptillNow);

}


vector<int>* longestPath(BinaryTreeNode<int>* root) {
    vector<int> uptillNow;
    allPaths(root,uptillNow);
    vector<int> final = ans[0];
    int finalSize = ans[0].size();

    for(int i=1;i<ans.size();i++){
        if(ans[i].size()>finalSize){
            finalSize  = ans[i].size();
            final = ans[i];
        }
    }
//    cout<<final.size();
//    cout<<endl;
//    for(int i=0;i<final.size();i++){
//        cout<<i<<" "<<final[i]<<endl;
//    }
//    cout<<endl;


    vector<int> * vp = new vector<int>();
    for(int i=final.size()-1;i>=0;i--){
       vp->push_back(final[i]);
    }
    return vp;

}

int maxLeavePath(BinaryTreeNode<int>* root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        return root->data;
    }
    int leftmaxLeavePath = maxLeavePath(root->left);
    int rightmaxLeavePath = maxLeavePath(root->right);
    return root->data + max(leftmaxLeavePath , rightmaxLeavePath);

}

void printLeftBoundary(BinaryTreeNode <int> * root){
    if(root==NULL){
        return;
    }
    if(root->left){
        cout<<root->data<<" ";
        printLeftBoundary(root->left);
    }
    else if (root->right!=NULL){
        cout<<root->data<<" ";
        printLeftBoundary(root->right);
    }
}
int a = 0;
void printLeaves(BinaryTreeNode <int> * root){
    if(root==NULL){
        return;
    }
    if(root->right==NULL && root->left==NULL){
            cout<<root->data<<" ";
            return;

    }
    printLeaves(root->left);
    printLeaves(root->right);
}

void printRightBoundary(BinaryTreeNode <int> * root){
    if(root) {

        if (root->right != NULL) {
            printRightBoundary(root->right);
            cout << root->data << " ";

        } else if (root->left != NULL) {
            printRightBoundary(root->left);
            cout << root->data << " ";

        }
    }

}

vector <node<int>*> createLLForEachLevel(BinaryTreeNode<int> *root) {
    vector  <node  <int>*>ans;
    if(root==NULL){
        return ans;
    }
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    BinaryTreeNode<int> * temp = NULL;
    pendingNodes.push(temp);

    node<int> * head = NULL;
    node<int> * tail = NULL;

    while(!pendingNodes.empty()){
        BinaryTreeNode <int> * workOnMe = pendingNodes.front();
        pendingNodes.pop();
        if(workOnMe==NULL){
            tail->next = NULL;
//            cout<<head->data<<endl;
            ans.push_back(head);
            head = NULL;
            tail = NULL;
            if(pendingNodes.size()==0){
                break;
            }

            BinaryTreeNode<int> * temp = NULL;
            pendingNodes.push(temp);
        }
        else{
            if(head==NULL){

                node<int> *noddy = new node<int>(workOnMe->data);
                 head = noddy;
                 tail = noddy;

            }
            else{
                node<int> *noddy = new node<int>(workOnMe->data);
                tail->next = noddy;
                tail  =tail->next;

            }
            if(workOnMe->left!=NULL){
                pendingNodes.push(workOnMe->left);
            }
            if(workOnMe->right!=NULL){
                pendingNodes.push(workOnMe->right);
            }

        }
    }
    return ans;



}

void boundaryTraversal(BinaryTreeNode<int>* root){


    cout<<root->data<<" ";
    printLeftBoundary(root->left);
    printLeaves(root->left);
    printLeaves(root->right);

    printRightBoundary(root->right);


}



void zigZagOrder(BinaryTreeNode<int> *root) {
    int checker = 1;
    if(root==NULL){
        return;
    }
    queue<BinaryTreeNode<int>*> pendingNodes;
    vector<int> uptillToPrint;
    pendingNodes.push(root);
    BinaryTreeNode<int> * temp = NULL;
    pendingNodes.push(temp);
    while(!pendingNodes.empty()){
        BinaryTreeNode <int> * workOnMe = pendingNodes.front();
        pendingNodes.pop();
        if(workOnMe==NULL){
            if(checker%2!=0) {
                for (int i = 0; i < uptillToPrint.size(); i++) {
                    cout << uptillToPrint[i] << " ";
                }
                cout << endl;
                checker++;
            }

            else{
                for (int i = uptillToPrint.size()-1; i >=0; i--) {
                    cout << uptillToPrint[i] << " ";
                }
                cout << endl;
                checker++;

            }
            uptillToPrint.clear();

            if(pendingNodes.size()==0){
                return;
            }
            BinaryTreeNode<int> * temp = NULL;
            pendingNodes.push(temp);
//            cout<<endl

        }
        else{
//            cout<<workOnMe->data<<" ";
            uptillToPrint.push_back(workOnMe->data);
            if(workOnMe->left!=NULL){
                pendingNodes.push(workOnMe->left);
            }
            if(workOnMe->right!=NULL){
                pendingNodes.push(workOnMe->right);
            }

        }
    }

}

//BinaryTreeNode<int>* buildTreePreInorderHelper(int *preorder, int preStart, int preEnd, int *inorder, int inStart, int inEnd){
//    if(preStart> preEnd || inStart > inEnd){
//        return NULL;
//    }
//    int val = preorder[preStart];
//    BinaryTreeNode<int> *p = new BinaryTreeNode<int>(val);
//    //find parent element index from inorder
//    int k = 0;
//    for(int i = inStart; i <= inEnd; i++){
//        if(val == inorder[i]){
//            k = i; break;
//        }
//    }
//    p -> left = buildTreePreInorderHelper(preorder, preStart + 1, preStart + (k - inStart), inorder, inStart, k - 1);
//    p -> right= buildTreePreInorderHelper(preorder, preStart + (k - inStart) + 1, preEnd, inorder, k + 1 , inEnd);
//    return p;
//}
//
//
//BinaryTreeNode<int>* buildTree(int *preorder, int preLenght, int *inorder, int inLength) {
//    return buildTreePreInorderHelper(preorder,0,preLenght-1,inLength,0,inLength-1);
//
//}


void ancestors(BinaryTreeNode<int> *root, int x , vector<int>* uptill) {
    if(root->data==x){
        return ;
    }
    uptill->push_back(root->data);
    if(isNodePresent(root->left,x)){
       return ancestors(root->left,x,uptill);
    }
    else if(isNodePresent(root->right,x)){
        return ancestors(root->right,x,uptill);
    }

}


void SpecialOrderPrint(BinaryTreeNode<int> *root) {
    if(root==NULL){
        return;
    }
    queue<BinaryTreeNode<int>*> pendingNodes;
    vector<int> uptillToPrint;
    pendingNodes.push(root);
    BinaryTreeNode<int> * temp = NULL;
    pendingNodes.push(temp);
    while(!pendingNodes.empty()){
        BinaryTreeNode <int> * workOnMe = pendingNodes.front();
        pendingNodes.pop();
        if(workOnMe==NULL){
//            cout<<"Size is  "<<uptillToPrint.size()<<" " << uptillToPrint[0]<<endl;

            if(uptillToPrint.size()==1){
                cout<<uptillToPrint[0]<<" ";
            }
            else {
                for (int i = 0; i < uptillToPrint.size() / 2; i++) {
//                cout<<"hi";
                    cout << uptillToPrint[i] << " ";
                    cout << uptillToPrint[uptillToPrint.size() -1 - i];
                    cout << " ";
                }
            }


            uptillToPrint.clear();

            if(pendingNodes.size()==0){
                return;
            }
            BinaryTreeNode<int> * temp = NULL;
            pendingNodes.push(temp);
//            cout<<endl

        }
        else{
//            cout<<workOnMe->data<<" ";
            uptillToPrint.push_back(workOnMe->data);
            if(workOnMe->left!=NULL){
                pendingNodes.push(workOnMe->left);
            }
            if(workOnMe->right!=NULL){
                pendingNodes.push(workOnMe->right);
            }

        }
    }

}


int evenOddLevelDifference( BinaryTreeNode<int>*root){
    int ans = 0;
    int oddEven = 1;


    if(root==NULL){
        return 0;
    }
    queue<BinaryTreeNode<int>*> pendingNodes;
    vector<int> uptillToPrint;
    pendingNodes.push(root);
    BinaryTreeNode<int> * temp = NULL;
    pendingNodes.push(temp);
    while(!pendingNodes.empty()){
        BinaryTreeNode <int> * workOnMe = pendingNodes.front();
        pendingNodes.pop();
        if(workOnMe==NULL){
            if(oddEven%2!=0){
                for(int i=0;i<uptillToPrint.size();i++){
                    ans += uptillToPrint[i];
                }
                oddEven++;
            }

            else if(oddEven%2==0){
                for(int i=0;i<uptillToPrint.size();i++){
                    ans -= uptillToPrint[i];
                }
                oddEven++;
            }


            uptillToPrint.clear();

            if(pendingNodes.size()==0){
                break;
            }
            BinaryTreeNode<int> * temp = NULL;
            pendingNodes.push(temp);
        }
        else{
            uptillToPrint.push_back(workOnMe->data);
            if(workOnMe->left!=NULL){
                pendingNodes.push(workOnMe->left);
            }
            if(workOnMe->right!=NULL){
                pendingNodes.push(workOnMe->right);
            }

        }
    }
    return ans;

}
void printLeftSideForTopView(BinaryTreeNode<int> * root, vector<int> * leftTopView) {
    if(root==NULL){
        return;
    }
    leftTopView->push_back(root->data);
    printLeftSideForTopView(root->left,leftTopView);
}


void rightSideForTopView(BinaryTreeNode<int> * root) {
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    rightSideForTopView(root->right);
}



void printTopView(BinaryTreeNode<int>*root){
    cout<<root->data<<" ";
    vector<int> *leftTopView = new vector<int>();
    printLeftSideForTopView(root->left,leftTopView);
    for(int i= 0;i < leftTopView->size();i++){
        cout<<leftTopView->at(i)<<" ";
    }

    rightSideForTopView(root->right);
//    cout<<leftTopView->size();

}

BinaryTreeNode<int> * sumTreeMaker(BinaryTreeNode<int> * root){
    if(root->left==NULL && root->right==NULL){
        root->data = 0;
        return root;
    }
    else if(root->right!=NULL && root->left!=NULL){
        root->data = root->left->data + root->right->data;
        root->left = sumTreeMaker(root->left);
        root->right = sumTreeMaker(root->right);
        return root;
    }
    else if(root->left!=NULL){
        root->data = root->left->data;
        root->left = sumTreeMaker(root->left);
        return root;
    }
    else if(root->right!=NULL){
        root->data = root->right->data;
        root->right = sumTreeMaker(root->right);
        return root;
    }
}



long long boundarySum = 0;
void printLeftBoundaryForSum(BinaryTreeNode <int> * root){
    if(root==NULL){
        return;
    }
    if(root->left){
        boundarySum+=root->data;
        printLeftBoundaryForSum(root->left);

    }
    else if (root->right!=NULL){
        boundarySum+=root->data;
        printLeftBoundaryForSum(root->right);
    }
}
void printLeavesForSum(BinaryTreeNode <int> * root){
    if(root==NULL){
        return;
    }
    if(root->right==NULL && root->left==NULL){
        boundarySum+=root->data;
        return;

    }
    printLeavesForSum(root->left);
    printLeavesForSum(root->right);
}

void printRightBoundaryForSum(BinaryTreeNode <int> * root){

    if(root) {

        if (root->right != NULL) {
            printRightBoundaryForSum(root->right);

            boundarySum+=root->data;

        } else if (root->left != NULL) {
            printRightBoundaryForSum(root->left);
            boundarySum+=root->data;

        }
    }

}



long long sumBoundaryNodes(BinaryTreeNode<int>*root) {

    boundarySum+=root->data;
    printLeftBoundaryForSum(root->left);
    printLeavesForSum(root->left);
    printLeavesForSum(root->right);

    printRightBoundaryForSum(root->right);
    return boundarySum;

}


bool checkXOR(BinaryTreeNode<int>*root) {
    if(root->left==NULL && root->right == NULL){
        return true;
    }
    if(root->data == root->left->data ^ root->right->data){
        bool a  = checkXOR(root->left);
        bool b = checkXOR(root->right);
        return a && b;
    }
    else  if(root->data != root->left->data ^ root->right->data){
        return false;
    }
}


void fillMapForVerticalOrder(BinaryTreeNode<int> * root,int i, map<int, vector<int> > & mappy){
    if(root==NULL){
        return;
    }
    mappy[i].push_back(root->data);

    fillMapForVerticalOrder(root->left,i-1,mappy);
    fillMapForVerticalOrder(root->right,i+1,mappy);
    return;
}


void verticalOrder(BinaryTreeNode<int> *root)
{

    map <int , vector<int> >  mappy ;
    fillMapForVerticalOrder(root,0, mappy);
    map<int, vector<int> > :: iterator it;
    for (it=mappy.begin(); it!=mappy.end(); it++)
    {
        for (int i=0; i<it->second.size(); ++i)
            cout << it->second[i] << " ";
            cout << endl;
    }
    return;
}

vector<int> verticallyBelowNodes(BinaryTreeNode<int>*root) {
    map <int , vector<int> >  mappy ;
    fillMapForVerticalOrder(root,0, mappy);
//    map<int, vector<int> > :: iterator it;
    vector<int> ans = mappy[0];
    vector<int> final;
    for(int i=1;i<ans.size();i++){
        final.push_back(ans[i]);
    }
    return final;

}
vector<int> vecOfPreoder;
void TreePreorder(BinaryTreeNode<int>* root){
    if(root==NULL){
        return;
    }
    vecOfPreoder.push_back(root->data);
    TreePreorder(root->left);
    TreePreorder(root->right);
}

vector<int> sumTree(BinaryTreeNode<int>* root){

    BinaryTreeNode<int> * getSumTree = sumTreeMaker(root);
    TreePreorder(getSumTree);
    return vecOfPreoder;
}

vector<int> vecOfPostorder;
void TreepostOrder(BinaryTreeNode<int>* root){
    if(root==NULL){
        return;
    }
    TreepostOrder(root->left);
    TreepostOrder(root->right);
    vecOfPostorder.push_back(root->data);

}

int  postOrderSuccessor(BinaryTreeNode<int> * root, int x){
    TreepostOrder(root);
    for(int i=0;i<vecOfPostorder.size();i++){
        if(vecOfPostorder[i] == x && i!=vecOfPostorder.size()-1){
            return vecOfPostorder[i+1];
        }
    }
    return -1;
}

int minLeafSum(BinaryTreeNode<int>* root)
{
    int sum= 0;
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    BinaryTreeNode<int> * nu = NULL;
    q.push(nu);
    while(!q.empty()){
        BinaryTreeNode<int> * temp = q.front();
        q.pop();

        if(temp==NULL){
            if(q.size()==0){
                break;
            }
            BinaryTreeNode<int> * n2 =NULL;
            q.push(n2);

            continue;
        }
        // Node * r = temp->right;
        if(temp->right==NULL && temp->left==NULL){
            while(temp!=NULL){
                if(temp->right==NULL && temp->left==NULL){
                    sum+=temp->data;
                }
                temp = q.front();
                q.pop();
            }
            return sum;

        }
        if(temp->left){
             q.push(temp->left);
        }

        if(temp->right){
             q.push(temp->right);
        }
    }
    return sum;

}


int printKDistantfromLeaf(BinaryTreeNode<int>* root, int k){
    queue<BinaryTreeNode<int> *> q;
    vector< BinaryTreeNode<int> *> leaf;
    q.push(root);
    map< BinaryTreeNode<int>* , BinaryTreeNode<int> * > parent;
    parent[root]  = NULL;
    while(!q.empty()){
        BinaryTreeNode<int> * temp = q.front();
        q.pop();

        if(temp->left){
            q.push(temp->left);
            parent[temp->left] = temp;
        }

        if(temp->right){
            q.push(temp->right);
            parent[temp->right] = temp;
        }
        if(!temp->right && !temp->left){
            leaf.push_back(temp);
        }
    }
    int ans = 0;
//    cout<<leaf.size()<<endl;
    set<BinaryTreeNode<int> * > saver;
    for(int i=0;i<leaf.size();i++){
        BinaryTreeNode<int> * curr = leaf[i];

        int j;
        for(j=1;j<=k;j++){
            if(!curr){
                break;
            }
            curr = parent[curr];
        }
//        cout<<"J"<<j<<endl;
        if(curr){
            int old = saver.size();
            saver.insert(curr);
            int now = saver.size();
//            cout<<old<<" "<<now;
            if(now>old) {
                ans++;
            }
        }
    }
    return ans;
}



//1 2 3 4 -1 5 6 -1 -1 -1 7 -1 8 9 -1 -1 101 2 3 4 -1 5 6 -1 -1 -1 7 -1 8 9 -1 -1 10

int main() {
    BinaryTreeNode<int> *root = takeInputLevelWise();

    int kk = printKDistantfromLeaf(root,2);
    cout<<"Ans is  "<<kk;
    return 0;
}