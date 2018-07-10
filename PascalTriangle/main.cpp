#include <iostream>
#include<cstring>
#include<vector>
using namespace std;

vector<string> permutationsString(string s ){
    if(s.length() == 1){
        vector<string> singleChar;
        singleChar.push_back(s);
        return singleChar;
    }
    else{
        char storeIt;
        vector<string> ans;
        for(int i=0;i<s.size();i++){
            storeIt = s[i];
            string leftQueryString;
            for(int k=0;k<i;k++){
                leftQueryString.push_back(s[k]);
            }
            for(int k=i+1;k<4;k++){
                leftQueryString.push_back(s[k]);
            }
            vector<string> leftOverSeqs = permutationsString(leftQueryString);
            for(int m = 0;m<leftOverSeqs.size();m++){
                string temp;
                temp.push_back(s[i]);
                for(int y = 0;y<leftOverSeqs[m].size();y++){
                    temp.push_back(leftOverSeqs[m][y]);
                }
                ans.push_back(temp);
            }
        }
        return ans;
    }
}

int main() {
    string s;
    s.push_back('a');
    s.push_back('a');

    vector<string> ans = permutationsString(s);
    cout<<ans.size();


}
