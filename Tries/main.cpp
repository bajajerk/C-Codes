#include <iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
class TrieNode {
	public :
	char data;
	TrieNode * *children;
	bool isTerminal;

	TrieNode(char data) {
		this -> data = data;
		children = new TrieNode*[26];
		for(int i = 0; i < 26; i++) {
			children[i] = NULL;
		}
		isTerminal = false;
	}
};

class Trie {
    TrieNode *root;

    public :

    Trie() {
        root = new TrieNode('\0');
    }

    void insertWord(TrieNode *root, string word) {
        // Base case
        if(word.size() == 0) {
            root -> isTerminal = true;
            return;
        }

        // Small Calculation
        int index = word[0] - 'a';
        TrieNode *child;
        if(root -> children[index] != NULL) {
            child = root -> children[index];
        }
        else {
            child = new TrieNode(word[0]);
            root -> children[index] = child;
        }

        // Recursive call
        insertWord(child, word.substr(1));
    }

    // For user
    void insertWord(string word) {
        insertWord(root, word);
    }


    bool searchHelper(string word, TrieNode *root) {
       if(word.size()==0 && root->isTerminal){
           return true;
       }
       else if(word.size()==0 && !root->isTerminal){
           return false;
       }

        int index = word[0] - 'a';
        TrieNode *child;
        if(root -> children[index] != NULL) {
            child = root -> children[index];
            return searchHelper(word.substr(1),child);
        }
        else if(root->children[index]==NULL){
            return false;
        }

    }
    bool search (string word){
        return searchHelper(word,root);
    }






//    eye of the tiger ti tim


    TrieNode * getStartingNode( TrieNode * root,string word){
        if(word.size()==0){
            return root;
        }
        int index = word[0] - 'a';
        TrieNode *child;
        if(root -> children[index] != NULL) {
            child = root -> children[index];
            return getStartingNode(child,word.substr(1));

        }
        else if(root->children[index]==NULL){
            return root;
        }

    }



    void autoCompleteHelper(vector<string> &input, TrieNode* starter , string uptillNow)
    {
        uptillNow.push_back(starter->data);
        if(starter->isTerminal){
            cout<<uptillNow<<endl;
            input.push_back(uptillNow);
        }
        for(int i = 0; i < 26; i++) {
            if(starter->children[i]!=NULL){
                autoCompleteHelper(input,starter->children[i], uptillNow);
            }
        }
    }

    void autoComplete(vector<string> &  input, string pattern) {
        TrieNode * starterNode = getStartingNode( root , pattern );
        string a;
        for(int i=0;i<pattern.size()-1;i++){
            a.push_back(pattern[i]);
        }
        autoCompleteHelper(input,starterNode,a);
    }








    bool searchPatternHelper(string word, TrieNode *root) {
        if(word.size()==0){
            return true;
        }


        int index = word[0] - 'a';
        TrieNode *child;
        if(root -> children[index] != NULL) {
            child = root -> children[index];
            return searchPatternHelper(word.substr(1),child);
        }
        else if(root->children[index]==NULL){
            return false;
        }

    }
    vector<TrieNode * > collecttin;
    void getCollection(TrieNode * root,string word) {
        int index = word[0] - 'a';
        for (int i = 0; i < 26; i++) {
            if (root->children[i] != NULL) {
                if (index == i) {
                    collecttin.push_back(root->children[i]);
                }
                getCollection(root->children[i],word );
            }
        }
    }

    bool patternMatching(vector<string> vect, string word) {
        getCollection(root,word);
        for(int i=0;i<collecttin.size();i++){
            cout<<"Searching for " << word.substr(1)<<"  in   "<<collecttin[i]->data<<endl;
            bool isThere = searchPatternHelper(word.substr(1),collecttin[i]);
            if(isThere){
                return true;
            }

        }
        return false;
    }





    void printAllWordsHelper(TrieNode*root, string uptill){
        if(root->data!='\0'){
            uptill.push_back(root->data);
        }

        if(root->isTerminal){
            cout<<uptill<<endl;
        }
        for(int i=0;i<26;i++){
            if (root->children[i] != NULL) {
                printAllWordsHelper(root->children[i],uptill);
            }
        }
    }
    void printAllWords(){
        string s = "";
        printAllWordsHelper(root,s);
    }


    bool findIfPalindromePair(vector<string> input) {
//        map<string,int> mapp;
        for(int i=0;i<input.size();i++){
            insertWord(input[i]);
            string prev = input[i];
            string toBeRevrsed = input[i];
            reverse(toBeRevrsed.begin(), toBeRevrsed.end());
            if(toBeRevrsed==prev) {
                return true;
            }
        }
        for(int i=0;i<input.size();i++){
            reverse(input[i].begin(), input[i].end());
            if(searchPatternHelper(input[i],root)){
                return true;
            }
        }

//        for(int i=0;i<input[])
        return  false;
    }
};




int main() {
    int choice;
    cin >> choice;
    Trie t;

    //cout << "asasas";
    while(choice != -1){
        string word;
        vector<string> inp;

        bool ans;
        switch(choice) {
            case 1 : // insert
                // getline(cin, word);
                cin >> word;
                t.insertWord(word);
                break;
            case 2 : // search
                // getline(cin, word);
                cin >> word;
                ans = t.search(word);
                if (ans) {
                    cout << "true" << endl;
                } else {
                    cout << "false" << endl;
                }
                break;
            case 3 :
                inp.push_back("abc");
                inp.push_back("def");
                inp.push_back("ghi");
                inp.push_back("cb");


//                t.printAllWords();
//                abc def ghi hg
                cout<<t.findIfPalindromePair(inp);
                break;
            default :
                return 0;
        }
        cin >> choice;
    }
//    cout<<"HI";
//    cout<<t.getStartHelp("May")->data;

    return 0;
}
//abc def ghi cba
//1
//ma
//1
//may
//1
//maya
//1
//mayan
//1
//mayank