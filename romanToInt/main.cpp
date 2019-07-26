#include <iostream>

using namespace std;

int romanToInt(string s) {
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'I' && i == s.size() - 1) {
            ans += 1;
            continue;
        }
        char next = s[i];
        if (next == 'V' || next == 'L' || next == 'X' || next == 'C' || next == 'D' ||
            next == 'M') {
            if(next == 'V'){
                ans+=5;
                continue;
            }
            if(next == 'X'){
                ans+=10;
                continue;
            }
            if(next == 'L'){
                ans+=50;
                continue;
            }
            if(next == 'C'){
                ans+=100;
                continue;
            }
            if(next == 'D'){
                ans+=500;
                continue;
            }
            if(next == 'M'){
                ans+=1000;
                continue;
            }

        }
        next = s[i + 1];
        if (s[i] == 'I' && (next == 'V' || next == 'L' || next == 'X' || next == 'C' || next == 'D' ||
                            next == 'M')) {
            ans -= 1;
            continue;

        }
        if (s[i] == 'I') {
            ans += 1;
            continue;
        }
    }
    return ans;
}

int main() {
    string s  = "MCMXCIV";
    cout<<romanToInt(s);
    return 0;
}