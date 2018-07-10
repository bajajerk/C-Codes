#include <iostream>
#include<string>
#include<map>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int r=1;r<=t;r++) {
        map<string, int> mappy;
        string s;
        int w;
        cin>>w;
        for(int m=0;m<w;m++){
            cin>>s;
            mappy[s]++;
        }

//        getline(cin, s);
//        string temp;
//        int size = s.size();
//        int i = 0;
//        while (i < size) {
//            if (s[i] != ' ') {
//                temp.push_back(s[i]);
//                i++;
//            } else {
//                if (temp.size() > 0) {
//                    mappy[temp]++;
//                }
//
//                temp = "";
//                i++;
//            }
//        }
        map<string, int>::iterator it;
        int max = -997;
        int secondmax = -998;
        string maxString;
        string secondString;
//        cout << " hi" << endl;
        for (it = mappy.begin(); it != mappy.end(); it++) {
            if (it->second >= max) {
                if (it->second == max) {
                    max = it->second;
                    maxString = it->first;
                } else {
                    secondmax = max;
                    max = it->second;
                    secondString = maxString;
                    maxString = it->first;
                }
            } else {
                if (it->second > secondmax) {
                    secondmax = it->second;
                    secondString = it->first;
                }
            }
//            cout << it->first << "  " << "a  " << it->second << endl;
        }
        cout << secondString << endl;
    }
}
