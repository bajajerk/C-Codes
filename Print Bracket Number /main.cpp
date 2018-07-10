#include <iostream>
#include<stack>
using namespace std;

int main() {
    int t;
    cin>>t;
   for(int y=1;y<=t;y++) {
        string s;
        cin >> s;
        int i = 0;
        stack<char> bracky;
        stack<int> num;

        int entry = 1;
        while (i != s.size()) {
            if (s[i] == '(') {
                num.push(entry);
                cout << entry << " ";
                entry++;
                i++;
            } else if (s[i] == ')') {
                cout << num.top() << " ";
                num.pop();
                i++;
            } else {
                i++;
            }
        }
        cout<<endl;
    }
}