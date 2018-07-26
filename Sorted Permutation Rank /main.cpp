#include <iostream>
#include<vector>
#include<utility>
using namespace std;

int fact(int n){
    if(n==1){
        return 1;
    }
    return (n% 1000003 * fact(n-1) % 1000003)% 1000003;
}
int size;
int getIndexAndDeleteElement(char s,vector< pair <char , bool > > * v){
    int index= 0;
    for(int i=0;i<v->size();i++){
        pair <char , bool > p = v->at(i);
        if(p.second){
//            cout<<s<<"  Seco is  "<<p.first<<endl;
            if(p.first==s){
                p.second = false;
                v->at(i) = p;
                size--;
                return  index;
            }
            else{
                index++;
            }
        }
    }
}

int findRankHelper(string s,vector< pair <char , bool > > *  v){
    if(s.length()==0 || s.length() ==1){
        return s.length();
    }
    int getIndex = getIndexAndDeleteElement(s[0],v);
//    cout<<getIndex<<" "<<size<<endl;
    int tempAns = (fact(size) * getIndex) % 1000003;
    int otherAns = findRankHelper(s.substr(1),v) % 1000003;
    return  (tempAns + otherAns)% 1000003;


}

int findRank(string s) {
    vector<char>  saver;
    for(int i=0;i<s.length();i++){
        saver.push_back(s[i]);
    }
    sort(saver.begin(),saver.end());
    size = saver.size();
    vector< pair <char , bool > > * v = new vector< pair <char , bool > > ();
    for(int i=0;i<saver.size();i++){
        pair <char , bool > pp;
//        cout<<saver[i];
        pp.first = saver[i];
        pp.second = true;
        v->push_back(pp);
    }
    return findRankHelper(s,v);

}

int main() {
    string s = "baa";
    cout<<findRank(s);
//    cout<<fact(15);
}