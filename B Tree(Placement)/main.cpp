#include <iostream>
#include<queue>
#include <math.h>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<string>
#include<set>
#include <stack>

using namespace std;

template<typename T>


class BinaryTreeNode {
public:
    T data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

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


BinaryTreeNode<int> *takeInput() {
    int rootData;
    //cout << "Enter root data : ";
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int> *currentNode = q.front();
        q.pop();
        int leftChild, rightChild;
        //cout << "Enter left child of " << currentNode -> data << " : ";
        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }
        //cout << "Enter right child of " << currentNode -> data << " : ";
        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int> *rightNode = new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}


void printTree(BinaryTreeNode<int> *root) {
    if (!root)
        return;
    else {
        cout << root->data << " ";
        printTree(root->left);
        printTree(root->right);

    }
}

void nodesPositionFromXis(BinaryTreeNode<int> *root, int pos) {
    if (root == NULL)
        return;
    nodesPositionFromXis(root->left, pos - 1);
    cout << root->data << " " << pos << endl;
    nodesPositionFromXis(root->right, pos + 1);
}


BinaryTreeNode<int> *invertTree(BinaryTreeNode<int> *root) {
    if (!root || (!root->right && !root->left))
        return root;
    BinaryTreeNode<int> *left = invertTree(root->left);
    BinaryTreeNode<int> *right = invertTree(root->right);
    root->right = left;
    root->left = right;
    cout << "HI " << root->data << endl;
    return root;
}

int max_cor = -7;
int max_cor_value = -7;

void deepestRightLeafhelper(BinaryTreeNode<int> *root, int pos) {
    if (root == NULL)
        return;
    if (pos > max_cor) {
        max_cor = pos;
        max_cor_value = root->data;
    }
    deepestRightLeafhelper(root->left, pos - 1);
    deepestRightLeafhelper(root->right, pos + 1);

}

void deepestRightLeaf(BinaryTreeNode<int> *root) {
    deepestRightLeafhelper(root, 0);
    cout << max_cor_value;
    return;
}

int min_cor_left = 0;
vector<BinaryTreeNode<int> *> v;

void deepestLeftNodeWhichIsLeftChildOfSomeNodeHelper(BinaryTreeNode<int> *root, int pos, bool check) {
    if (!root)
        return;
    if (check) {
//        cout<<pos<<endl;
        if (pos > min_cor_left) {
            min_cor_left = pos;
//            min_cor_value = root->data;
            v.clear();
            v.push_back(root);
        } else if (pos == min_cor_left)
            v.push_back(root);
    }
    deepestLeftNodeWhichIsLeftChildOfSomeNodeHelper(root->left, pos + 1, true);
    deepestLeftNodeWhichIsLeftChildOfSomeNodeHelper(root->right, pos + 1, false);
}

int deepestLeftNodeWhichIsLeftChildOfSomeNode(BinaryTreeNode<int> *root) {
    deepestLeftNodeWhichIsLeftChildOfSomeNodeHelper(root, 0, false);
    int maxxy = -9;
    for (int i = 0; i < v.size(); i++) {
        cout << "v is " << v[i]->data << endl;
        maxxy = max(v[i]->data, maxxy);

    }
    return maxxy;
}

void ancesHelper(BinaryTreeNode<int> *root, int k, vector<int> &ans, vector<int> temp) {

    if (!root)
        return;
    if (root->data == k) {
        for (int i = 0; i < temp.size(); i++) {
            ans.push_back(temp[i]);
        }
        return;
    }
    temp.push_back(root->data);
    ancesHelper(root->left, k, ans, temp);
    ancesHelper(root->right, k, ans, temp);
}


vector<int> ancestors(BinaryTreeNode<int> *root, int k) {
    vector<int> ans;
    vector<int> temp;
    ancesHelper(root, k, ans, temp);
    return ans;

}

void sumOfNodesAtLevelKHelper(BinaryTreeNode<int> *root, int k, int level, long long &sum) {
    if (!root)
        return;
    if (level == k) {
        sum += root->data;
        return;
    }
    sumOfNodesAtLevelKHelper(root->left, k, level + 1, sum);
    sumOfNodesAtLevelKHelper(root->right, k, level + 1, sum);
}


long long sumOfNodesAtLevelK(BinaryTreeNode<int> *root, int k) {
    long long sum = 0;
    sumOfNodesAtLevelKHelper(root, k, 1, sum);
}

void zigZagOrder(BinaryTreeNode<int> *root) {
    if (!root)
        return;
    queue<BinaryTreeNode<int> *> q;
    stack<int> st;

    bool correct = true;
    q.push(root);
    q.push(NULL);
    while (q.size() > 1) {
        BinaryTreeNode<int> *n = q.front();
        q.pop();
        if (!n) {
            if (!correct) {
                while (!st.empty()) {
                    cout << "S" << st.top() << " ";
                    st.pop();
                }
            }
            cout << endl;
            correct = !correct;
//            cout<<endl;
            q.push(NULL);
        } else {
            if (n->left)
                q.push(n->left);
            if (n->right)
                q.push(n->right);
            if (!correct) {
                cout << "AT" << n->data << endl;
                st.push(n->data);
            } else {
                cout << n->data << " ";
            }


        }
    }

}


void checkLeavesHelper(BinaryTreeNode<int> *root, int pos, bool &done, int &level, bool &ans) {
    if (!root)
        return;
    cout << root->data << "   " << level << "  " << done << " " << ans << endl;
    if (!root->left && !root->right) {
        if (!done) {
            done = true;
            level = pos;
        } else if (done) {
            if (level != pos) {
                ans = false;
                return;
            }
        }
        return;
    }
    checkLeavesHelper(root->left, pos + 1, done, level, ans);
    checkLeavesHelper(root->right, pos + 1, done, level, ans);

}

//if all leaves are same level
void checkLeaves(BinaryTreeNode<int> *root) {
    bool done = false;
    int level = 0;
    bool ans = true;
    checkLeavesHelper(root, 0, done, level, ans);
    cout << ans;

}

void maxSumPathHelper(BinaryTreeNode<int> *root, vector<int> v, int sum, int &maxxy, vector<int> &ans) {
    if (!root)
        return;
    v.push_back(root->data);
    sum += root->data;
    if (!root->left && !root->right) {
//        cout<<sum<<endl;
        if (sum > maxxy) {
//            cout<<"If"<<sum<<"   "<<maxxy<<endl;
            maxxy = sum;
            ans = v;
        }
    }
    maxSumPathHelper(root->left, v, sum, maxxy, ans);
    maxSumPathHelper(root->right, v, sum, maxxy, ans);
}


void maxSumPath(BinaryTreeNode<int> *root) {
    vector<int> ans;
    vector<int> temp;
    int maxxy = -99;
    maxSumPathHelper(root, temp, 0, maxxy, ans);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}

void printLevelATNewLine(BinaryTreeNode<int> *root) {
    queue<BinaryTreeNode<int> *> q1;
    q1.push(root);
    q1.push(NULL);
    while (!q1.empty()) {
        BinaryTreeNode<int> *current = q1.front();
        if (current == NULL) {
            q1.push(NULL);
            cout << endl;
            q1.pop();
            if (q1.front() == NULL) {
                break;
            }
        } else {
            if (current->left != NULL)
                q1.push(current->left);
            if (current->right != NULL)
                q1.push(current->right);
            cout << current->data << " ";
            q1.pop();
        }


    }
}

bool isTreeSimilar(BinaryTreeNode<int> *root1, BinaryTreeNode<int> *root2) {
    if (!root1 && !root2)
        return true;
    if (!root1 && root2)
        return false;
    if (root1 && !root2)
        return false;
    if (root1->data != root2->data)
        return false;
    if (root1->data != root2->data)
        return false;
    if (root1->data == root2->data)
        return isTreeSimilar(root1->left, root2->left) && isTreeSimilar(root1->right, root2->right);
}

bool areAtSameLevel(BinaryTreeNode<int> *root, int x, int y) {

    queue<BinaryTreeNode<int> *> q1;
    q1.push(root);
    q1.push(NULL);
    bool oneFound = false;
    bool secondFound = false;
    int whichFound;
    while (!q1.empty()) {
        BinaryTreeNode<int> *current = q1.front();
        if (current == NULL) {
            q1.push(NULL);
            if (oneFound || secondFound)
                return false;
//            cout << endl;
            q1.pop();
            if (q1.front() == NULL) {
                break;
            }
        } else {
            if (current->left != NULL)
                q1.push(current->left);
            if (current->right != NULL)
                q1.push(current->right);
            if (oneFound) {
                if (current->data != whichFound && (current->data == x || current->data == y)) {
                    return true;
                }
            }
            if (current->data == x || current->data == y) {
                oneFound = true;
                whichFound = current->data;
            }
            q1.pop();
        }
    }

}

void haveSameParentsHelper(BinaryTreeNode<int> *root, vector<BinaryTreeNode<int> *> &v, int x, int y) {
    if (!root)
        return;
    if (root->left && (root->left->data == x || root->left->data == y)) {
        v.push_back(root);
    }
    if (root->right && (root->right->data == x || root->right->data == y)) {
        v.push_back(root);
    }
    return;

}

bool haveSameParents(BinaryTreeNode<int> *root, int x, int y) {
    vector<BinaryTreeNode<int> *> v;
    haveSameParentsHelper(root, v, x, y);
    if (v.size() < 2) {
        return false;
    }
    return v[0]->data == v[1]->data;

}

bool isCousins(BinaryTreeNode<int> *root, int x, int y) {
    return !haveSameParents(root, x, y) && areAtSameLevel(root, x, y);

}

BinaryTreeNode<int> *searchForNode(BinaryTreeNode<int> *s, BinaryTreeNode<int> *t) {
    if (!s || !t)
        return NULL;
    if (s->data == t->data)
        return s;
    BinaryTreeNode<int> *l = searchForNode(s->left, t);
    if (l)
        return l;
    BinaryTreeNode<int> *r = searchForNode(s->right, t);
    if (r)
        return r;
    return NULL;
}
//todo
//bool isSubtree( BinaryTreeNode<int> *  s, BinaryTreeNode<int> * t) {
//    if(s==t)
//        return true;
//    BinaryTreeNode<int> * found = searchForNode(s,t);
//    if(!found)
//
//
//
//}


BinaryTreeNode<int> *mergeTrees(BinaryTreeNode<int> *t1, BinaryTreeNode<int> *t2) {
    if (!t1 && !t2)
        return NULL;
    else if (t1 && t2) {
        t1->data += t2->data;
    } else if (t1 && !t2) {
        return t1;
    } else if (!t1 && t2) {
//        t1 = t2;
        return t2;
    }
    t1->left = mergeTrees(t1->left, t2->left);
    t1->right = mergeTrees(t1->right, t2->right);
    return t1;
}
//1 3 2 5 -1 -1 -1 -1 -1
//2 1 3 -1 4 -1 7 -1 -1 -1 -1
//2 1 3 -1 4

BinaryTreeNode<int> *removeHalfNodes(BinaryTreeNode<int> *root) {
    if (!root)
        return root;
    if (root->left && !root->right) {
        root = root->left;
        return removeHalfNodes(root);
    } else if (!root->left && root->right) {
        root = root->right;
        return removeHalfNodes(root);

    } else if (root->left && root->right) {

    }
    root->left = removeHalfNodes(root->left);
    root->right = removeHalfNodes(root->right);
    return root;

}

void printInorder(BinaryTreeNode<int> *node) {
    if (node == NULL)
        return;

    printInorder(node->left);

    cout << node->data << " ";

    printInorder(node->right);
}

#include<algorithm>

bool find3Numbers(int A[], int arr_size, int sum) {
    int l, r;

    sort(A, A + arr_size);


    for (int i = 0; i < arr_size - 2; i++) {


        l = i + 1;

        r = arr_size - 1;
        while (l < r) {
            if (A[i] + A[l] + A[r] == sum) {
                printf("Triplet is %d, %d, %d", A[i],
                       A[l], A[r]);
                return true;
            } else if (A[i] + A[l] + A[r] < sum)
                l++;
            else
                r--;
        }
    }
    return false;
}

void fillIt(BinaryTreeNode<int> *root, vector<int> &nums) {
    if (!root)
        return;
    nums.push_back(root->data);
    fillIt(root->left, nums);
    fillIt(root->right, nums);
    return;
}

void checkTriplet(BinaryTreeNode<int> *root, int x) {
    vector<int> nums;
    fillIt(root, nums);
    int arr[nums.size()];
    for (int i = 0; i < nums.size(); i++) {
        arr[i] = nums[i];
    }
    if (find3Numbers(arr, nums.size(), x))
        cout << "YES";
    else
        cout << "NO";

}


BinaryTreeNode<int> *makesumtree(BinaryTreeNode<int> *root) {
    if (!root)
        return root;
    if (root->right && root->left) {
        root->data = root->left->data + root->right->data;
    } else if (root->left && !root->right) {
        root->data = root->left->data;
    } else if (!root->left && root->right) {
        root->data = root->right->data;
    }
    root->left = makesumtree(root->left);
    root->right = makesumtree(root->right);
    return root;
}

//void implementChildSumProperty(BinaryTreeNode<int>* node){
//    BinaryTreeNode<int>* m= makesumtree(root);
//    printInorder(m);
//
//}

BinaryTreeNode<int> *get(BinaryTreeNode<int> *root, int data) {
    if (!root)
        return root;
    if (root->data == data)
        return root;
    if (get(root->left, data))
        return get(root->left, data);
    if (get(root->right, data))
        return get(root->right, data);

}

void print(BinaryTreeNode<int> *root) {
    if (!root)
        return;
    else
        cout << root->data << " ";
    print(root->left);
    print(root->right);
}

void printLeafNodes(BinaryTreeNode<int> *root, int data) {
    BinaryTreeNode<int> *n = get(root, data);
    print(n);
}

void printLeftView(BinaryTreeNode<int> *root) {
    queue<BinaryTreeNode<int> *> q1;
    q1.push(root);
    q1.push(NULL);
    cout << root->data << " ";
    bool first = false;
    while (!q1.empty()) {
        BinaryTreeNode<int> *current = q1.front();
        if (current == NULL) {
            q1.push(NULL);
            first = true;
            q1.pop();
            if (q1.front() == NULL) {
                break;
            }
        } else {
            if (first) {
                cout << current->data << " ";
                first = false;
            }
            if (current->left != NULL)
                q1.push(current->left);
            if (current->right != NULL)
                q1.push(current->right);
            q1.pop();
        }


    }
}


void ksmallestElementSumHelper(BinaryTreeNode<int> *root, int &k, int &sum, int &ans, bool &done) {
    if (!root || k == 0) {
        return;
    }
//    if(k==0 && !done) {
//        ans  = sum;
//        done = true;
//    }
    if (k != 0) {
        ksmallestElementSumHelper(root->left, k, sum, ans, done);
    }
    if (k != 0) {
        sum += root->data;
        k--;
    }
    if (k != 0) {
        ksmallestElementSumHelper(root->right, k, sum, ans, done);
    }


}

int ksmallestElementSum(BinaryTreeNode<int> *root, int k) {
    int sum = 0;
    int ans = 0;
    bool done = false;
    ksmallestElementSumHelper(root, k, sum, ans, done);
    return sum;
}


int highestInBst(BinaryTreeNode<int> *root) {
    if (!root->right)
        return root->data;
    return highestInBst(root->right);
}

int lowestInBSIT(BinaryTreeNode<int> *root) {
    if (!root->left)
        return root->data;
    return highestInBst(root->left);
}

BinaryTreeNode<int> *findNodeBST(BinaryTreeNode<int> *root, int k) {
    if (k == root->data)
        return root;
    if (k > root->data)
        return findNodeBST(root->right, k);
    else if (k < root->data)
        return findNodeBST(root->left, k);

}

void findPreSuc(BinaryTreeNode<int> *root, int k) {
    BinaryTreeNode<int> *n = findNodeBST(root, k);
    cout << n->data << endl;
    cout << highestInBst(n->left) << " " << lowestInBSIT(n->right);

}


BinaryTreeNode<int> *findBachaHua(BinaryTreeNode<int> *root, int k) {
    if (!root)
        return NULL;
    if (root->data == k)
        return root;
    if (k > root->data)
        return findBachaHua(root->right, k);
    else
        return findBachaHua(root->left, k);
}

void nodesSumToSBSTHellper(BinaryTreeNode<int> *root, int sum) {
    if (!root)
        return;
    if (2 > 1) {
        BinaryTreeNode<int> *left = findBachaHua(root->right, sum - root->data);
        if (left)
            cout << root->data << " " << left->data << endl;
    }
    if (2 > 1) {
        BinaryTreeNode<int> *left = findBachaHua(root->left, sum - root->data);
        if (left)
            cout << root->data << " " << left->data << endl;
    }
    nodesSumToSBSTHellper(root->left, sum);
    nodesSumToSBSTHellper(root->right, sum);

}


void nodesSumToSBST(BinaryTreeNode<int> *root, int sum) {

}

BinaryTreeNode<int> *lcaOfTree(BinaryTreeNode<int> *root, int x, int y) {
    if (!root)
        return root;
    if (root->data == x || root->data == y)
        return root;
    BinaryTreeNode<int> *lcaLeft = lcaOfTree(root->left, x, y);
    BinaryTreeNode<int> *lcaRight = lcaOfTree(root->right, x, y);
    if (lcaLeft && lcaRight) {
        return root;
    } else if (lcaLeft && !lcaRight)
        return lcaLeft;
    else if (!lcaLeft && lcaRight)
        return lcaRight;
    else if (!lcaLeft && !lcaRight)
        return nullptr;
}

BinaryTreeNode<int> *highestbetween2Node(BinaryTreeNode<int> *root, int k, int &num) {
    if (!root)
        return root;
    else {
        num = max(num, root->data);
    }
    if (root->data == k) {
//        num  = root->data;
        return root;
    } else if (root->data > k)
        return highestbetween2Node(root->left, k, num);
    else if (root->data < k)
        return highestbetween2Node(root->right, k, num);

}

int maximumElementIn2NodesPathBST(BinaryTreeNode<int> *root, int x, int y) {
    BinaryTreeNode<int> *lca = lcaOfTree(root, x, y);
    cout << "LCA IS " << lca->data << endl;
    int num = -11;
    int num2 = -99;
    BinaryTreeNode<int> *temp1 = highestbetween2Node(lca, x, num);
    BinaryTreeNode<int> *temp2 = highestbetween2Node(lca, y, num2);
    cout << num << "  " << num2;
    return max(num, num2);

}

int getCount(BinaryTreeNode<int> *root, int low, int high) {
    if (!root)
        return 0;
    if (root->data >= low && root->data <= high) {
        if (!root->right && !root->left)
            return 1;
    }

    if (root->data >= low && root->data <= high) {
        if (!root->right || (root->right && highestInBst(root->right) <= high)) {
            if (!root->left || (root->left && lowestInBSIT(root->left) >= low)) {
                return 1 + getCount(root->left, low, high) + getCount(root->right, low, high);
            }
        }
    }

    return getCount(root->left, low, high) + getCount(root->right, low, high);
}

void fillArrayWithBst(BinaryTreeNode<int> *root, vector<int> & v){
    if(!root)
        return;
    fillArrayWithBst(root->left,v);
    v.push_back(root->data);
    fillArrayWithBst(root->right,v);
}
bool isPairPresent(BinaryTreeNode<int> *root,int sum)
{
    vector<int>v;
    fillArrayWithBst(root,v);
    cout<<v.size();
    return true;
}

int main() {

    BinaryTreeNode<int> *root = takeInput();

    cout << getCount(root, 1, 45);
//    cout<<"done";
//    BinaryTreeNode<int> *  root2= takeInput();




//    printTree(m);
//    cout<<endl;
//    BinaryTreeNode<int> *  inv = invertTree(root);
//    printLeftView(root);
//    nodesPositionFromXis(root,0);
//    deepestRightLeaf(root);
//    cout<<deepestLeftNodeWhichIsLeftChildOfSomeNode(root);
//    vector<int> a;
//    a.push_back(12);
//    timepass(a);
//    cout<<a.size();


    return 0;
}

