#include <iostream>
#include<map>
#include<vector>
using namespace std;

vector<int> longestSubsequence(int *a, int n){
    map<int,int> mappy;
    int max_length = -9999;
    vector<int> ans;
    for(int i=0;i<n;i++){
        mappy[a[i]]++;
    }
    for (int i=0;i<n;i++){
        if(mappy[a[i]]>=1){
            vector<int> v;
            int element = a[i];
            int previous = a[i]-1;
            while(mappy[previous]>=1){
                previous--;
                mappy[previous] = 0;
            }
            for(int k=previous+1;k<=element;k++){
                v.push_back(k);
            }
            int ahead = element+1;
            while(mappy[ahead]>=1){
                ahead++;
            }
            for(int k=element+1;k<ahead;k++){
                v.push_back(k);
            }

            if(v.size()>ans.size()){
                ans = v;
            }
        }
        }
    return ans;


}

int main() {

}