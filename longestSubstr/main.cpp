#include <iostream>
#include <cstring>
#include<map>
#include<set>
using namespace std;


//int longestSubstr(string s) {
//    int size = s.size();
//    set<int> myset;
//    int max = INT_MIN;
//    int count = 0;
//    for(int i=0;i<size;i++){
//        int setSize = myset.size();
//        myset.insert(s[i]);
//        if(myset.size()!= setSize){
//            count++;
//        }
//        else{
//            int calculatedCount  = count;
//            if(calculatedCount>max){
//                max = calculatedCount;
//            }
//            count = 0;
//            myset.clear();
//        }
//    }
//
//    return max;
//
//}

int longestSubstr(string s) {
    int size = s.size();
    int max = INT_MIN;
    for (int i = 0; i < s.size(); i++) {
//    int j = i;

        map<char, int> mappy;
        int count = 0;
        int j;
        for ( j = i; j < size; j++) {
            if (mappy[s[j]] == 0) {
                mappy[s[j]]++;
                count++;
            } else if (mappy[s[j]] >= 1 ) {

                if (count > max) {
                    max = count;
                }
                break;
            }
            if(j==size-1){
                if (count > max) {
                    max = count;
                }
                break;
            }

        }

    }
    return max;
}






int main() {
    cout<<longestSubstr("ab");
    return 0;
}