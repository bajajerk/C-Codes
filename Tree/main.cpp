#include <iostream>
#include<vector>
#include <utility>
#include<queue>
using namespace std;

template <typename T>
class TreeNode {
public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data) {
        this->data = data;
    }
};


void PrintTree(TreeNode <int> * root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<"; ";
    for(int i = 0;i<root->children.size();i++){
        cout<<root->children[i]->data<< " ";
    }
    cout<< endl;

    for(int i = 0;i<root->children.size();i++){
        PrintTree(root->children[i]);
    }
    return;
}

TreeNode<int>* takeInput() {
    int rootData;
    cout << "Enter data" << endl;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    int n;
    cout << "Enter num of children of " << rootData << endl;
    cin >> n;
    for (int i = 0; i < n; i++) {
        TreeNode<int>* child = takeInput();
        root->children.push_back(child);
    }
    return root;
}

TreeNode<int>* takeInputLevelWise() {
    int element;
    cin>>element;
    queue<TreeNode<int>* > saver;
    TreeNode<int>* root = new TreeNode<int>(element);
    saver.push(root);
    while(!saver.empty()) {
        TreeNode<int>* temp = saver.front();
        saver.pop();
        int n;
        cout << "Tell number of children of" << temp->data<<endl;
        cin >> n;
        for(int i=0;i<n;i++){
            int k;
            cout<<"Write it  ";

            cin>>k;
            TreeNode<int>* noddy = new TreeNode<int>(k);
            temp->children.push_back(noddy);
            saver.push(noddy);
        }
    }
    return root;
}

void printLevelWise(TreeNode<int>* root) {
    if(root==NULL){
        return;
    }
    queue<TreeNode<int>*> saver;
    saver.push(root);
    while(!saver.empty()){
        TreeNode<int>* temp = saver.front();
        saver.pop();
        if(temp->data==-999){
            cout<<endl;
            continue;
        }
        cout<<temp->data<<":";
        for(int i=0;i<temp->children.size();i++){
            cout<<temp->children[i]->data;
            if(i==temp->children.size()-1){

            }
            else{
                cout<<",";
            }
        }
        cout<<endl;
        for(int i=0;i<temp->children.size();i++){
            saver.push(temp->children[i]);
        }
//        TreeNode<int>* differentiator = new TreeNode<int>(-999);
//        saver.push(differentiator);
    }

    return ;
}

int sumOfNodes(TreeNode<int>* root) {
  if(root==NULL){
      return 0;
  }
  int count = root->data;
  for(int i=0;i<root->children.size();i++){
      count+=sumOfNodes(root->children[i]);
  }
  return count;
}


TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    TreeNode<int>* maxxy  = root;
    for(int i=0;i<root->children.size();i++){
        if(   maxxy->data < maxDataNode(root->children[i])->data)  {
            maxxy = maxDataNode(root->children[i]);
        }
    }
    return maxxy;
}

int height(TreeNode<int>* root) {
    if(root==NULL){
        return 0;
    }
    int maxxHeight = 0;
    for(int i=0;i<root->children.size();i++){
        maxxHeight = max(maxxHeight,height(root->children[i]));
    }
    return 1+maxxHeight;
}

int numLeafNodes(TreeNode<int>* root) {
    if(root->children.size()==0){
        return 1;
    }
    int ans = 0;
    for(int i=0;i<root->children.size();i++){
        ans+=numLeafNodes(root->children[i]);
    }
    return ans;
}
bool containsX(TreeNode<int>* root, int x) {
    if(root->data==x){
        return true;
    }
    for(int i=0;i<root->children.size();i++){
        bool ans = containsX(root->children[i],x);
    }
    return false;

}

int nodesGreaterThanX(TreeNode<int> *root, int x) {
    int count = 0;
    if(root->data > x){
        count++;
    }

    for(int i=0;i<root->children.size();i++){
        count+= nodesGreaterThanX(root->children[i],x);
    }
    return count;
}

pair < TreeNode<int>*, int > maxNodeAndMaxSumHelper (TreeNode<int> *root){
    TreeNode<int> * ans = root;
    int sum = root->data;

    for(int i=0;i<root->children.size();i++){
        sum+=root->children[i]->data;
    }

    for(int i=0;i<root->children.size();i++){
        pair < TreeNode<int>*, int > smallAns = maxNodeAndMaxSumHelper (root->children[i]);
       if(smallAns.second > sum){
           sum = smallAns.second;
           ans = smallAns.first;
       }
    }
    pair < TreeNode<int>*, int > final;
    final.first = ans;
    final.second = sum;
    return final;
}

TreeNode<int>* maxSumNode(TreeNode<int> *root){
    pair < TreeNode<int>*, int > ans = maxNodeAndMaxSumHelper (root);
    return ans.first;
}


//pair < TreeNode<int>*,  TreeNode<int>* > maxAndSecondMax (TreeNode<int> *root) {
//    TreeNode<int>* maximum = root;
//    TreeNode<int>* secondMax = new TreeNode<int>(-999);
//    for(int i=0;i<root->children.size();i++){
//        pair temp = maxAndSecondMax(root->children[i]);
//        if(temp.first->data > maximum->data){
//            maximum = temp.first;
//            if()
//            secondMax =
//        }
//
//    }
//
//
//}


void postOrder(TreeNode<int>* root) {
    if(root==NULL){
        return;
    }
    for(int i=0;i<root->children.size();i++){
        postOrder(root->children[i]);
    }
    cout<<root->data<<" ";
}

vector<    pair <TreeNode<int>*, int >  > nextLargerElementHelper (TreeNode<int> *root, int x) {
    vector<  pair <TreeNode<int>*, int > >ans;
    if(root->data>x){
        pair <TreeNode<int>*, int > gotIt;
        gotIt.first = root;
        gotIt.second = root->data - x;
        ans.push_back(gotIt);
    }

    for(int i=0;i<root->children.size();i++){
        vector<  pair <TreeNode<int>*, int > > temp = nextLargerElementHelper(root->children[i],x);
        for(int i=0;i<temp.size();i++){
            ans.push_back(temp[i]);
        }
    }
    return ans;
}


TreeNode<int>* nextLargerElement(TreeNode<int> *root, int x) {
    vector<    pair <TreeNode<int>*, int >  >  ans =  nextLargerElementHelper(root,x);
    TreeNode<int>* final = ans[0].first;
    int leastDiff = ans[0].second;

    for(int i=1;i<ans.size();i++){
        if(ans[i].second<leastDiff){
            leastDiff = ans[i].second;
            final = ans[i].first;
        }
    }
//    cout<<ans.size()<<endl;
    return final;

}

    void printHelper(TreeNode<int> *root, int data, int frequency){
        if(frequency==0){
            return;
        }
        for(int i=0;i<frequency;i++){
            cout<<data<<" ";
        }
        cout<<endl;
        if(root->children.size()==0){
            return;
        }
        printHelper(root->children[0], data+1,root->children.size());

    }


void replaceWithDepth(TreeNode<int> * root, int num) {

root->data = num;
for(int i=0;i<root->children.size();i++){
    replaceWithDepth(root->children[i],num+1);
}
return ;
}

void replaceWithDepthValue(TreeNode<int> *root){
  replaceWithDepth(root,0);
}


bool isIdentical(TreeNode<int> *root1, TreeNode<int> *root2) {
    if(root1->data!=root2->data){
        return false;
    }
    if(root1->children.size()!=root2->children.size()){
        return false;
    }
    else{
        for(int i=0;i<root1->children.size();i++){
            bool ans = isIdentical(root1->children[i], root2->children[i]);
            if(!ans){
                return false;
            }
        }
    }
    return true;
}



int main() {

    TreeNode<int> * root = takeInputLevelWise();
    TreeNode<int> * root2 = takeInputLevelWise();

    cout<<isIdentical(root,root2);
//    postOrder(root);
//    TreeNode<int> * ans = nextLargerElement (root,18);
//    cout<<ans->data;
//    cout<<ans->data;
    //    TreeNode<int> * ans = maxSumNode(root);
//    cout<<"This is";
//    cout<<ans->data;
    return 0;
}