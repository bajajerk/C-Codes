#include <iostream>
#include<stack>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int y=1;y<=t;y++) {
        string s;
        cin >> s;
        stack<char> stacky;
        int i = 0;
        while (i < s.size()) {
            if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
                stacky.push(s[i]);
                i++;
            } else if (s[i] == '}' || s[i] == ']' || s[i] == ')') {
                if (stacky.empty()) {
//                cout<<"khatam";
                    cout << "not balanced";
                    cout << endl;
                    break;
                } else if (s[i] == '}' && stacky.top() == '{') {
                    stacky.pop();
                    i++;
                } else if (s[i] == ')' && stacky.top() == '(') {
                    stacky.pop();
                    i++;
                } else if (s[i] == ']' && stacky.top() == '[') {
                    stacky.pop();
                    i++;
                } else {
                    cout << "not balanced";
                    cout << endl;
                    break;
                }
            }
        }
//        cout<<stack.size()
        if (i == s.size() && stacky.empty()) {
            cout << "balanced"<<endl;
        }
        else{
//            cout<<"here"<<endl;
            cout << "not balanced";
            cout << endl;
        }
    }
}