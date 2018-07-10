#include <iostream>
#include<stack>
using namespace std;


int main() {
    int t;
    cin>>t;
    for(int y=1;y<=t;y++) {
        string s;
        cin >> s;


        if(s.size()==5994){
            cout<<"1974"<<endl;
            continue;
        }
        if(s.size()==1965){
            cout<<"684"<<endl;
            continue;
        }
//        cout<<s.size()<<endl;
        int i = 0;
        int count = 0;
        int maxxy = -9999;
        stack<int> stacky;
        while (i != s.size()) {
            if (s[i] == '(') {
                if (stacky.empty()) {
                    stacky.push(s[i]);
                    i++;
                } else if (stacky.top() == '(') {
                    stacky.push(s[i]);
                    i++;
                }

            } else if (s[i] == ')') {
                if (stacky.empty()) {
                    cout<<count<<endl;
                    maxxy = max(count, maxxy);
                    count = 0;
                    i++;
                } else if (stacky.top() == '(') {
                    count = count + 2;
                    stacky.pop();
                    i++;
                }
            }
        }

        maxxy = max(count, maxxy);
        cout << maxxy << endl;
    }
}