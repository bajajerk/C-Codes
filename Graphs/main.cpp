#include <iostream>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
using namespace std;

void printDFS(int **edges, int n , bool *isVisited , int starting){
        if(!isVisited[starting]){
            cout<<starting<<" ";
            isVisited[starting] = true;
            for(int j=0;j<n;j++){
                if(edges[starting][j]){
                    printDFS(edges,n,isVisited,j);
                }
            }
        }
}


void printBFS(int **edges, int n , bool * visited, int starter){
    queue<int> q;
    q.push(starter);
    visited[starter] = true;
    while(!q.empty()){
        int iAm = q.front();

        cout<<iAm<<" ";
        q.pop();

        for(int i=0;i<n;i++){
            if(edges[iAm][i]){
                if(!visited[i]){
                    q.push(i);
                    visited[i] = true;
                }
            }
        }
    }

}


bool hasPath(int **edges, int n , bool * visited, int start , int end){
    if(edges[start][end]){
        return true;
    }
    visited[start] = true;


//    cout<<start<<" "<<end<<endl;
    for(int i=0;i<n;i++){
        if(edges[start][i]){
            if(!visited[i]) {
                bool ans = hasPath(edges, n, visited, i, end);
                if (ans) {
                    return true;
                }
            }
        }
    }
    return false;

}


vector<int> pathDFSLong(int **edges, int n , bool * visited, int start , int end,vector<int> ans){


//    Base case
    if(start==end){
        ans.push_back(end);
        return ans;
    }

    visited[start] = true;

    for(int i=0;i<n;i++){
        if(edges[start][i]){
            if(!visited[i]) {
                vector<int> ans;
                vector<int> smallAns = pathDFSLong(edges, n, visited, i, end, ans);
                if (smallAns.size() >= 1) {
                    smallAns.push_back(start);
                    return smallAns;
                }
            }
        }

    }
    vector<int> empty;
    return empty;
}

void printShortPath(int **edges, int n , bool * visited, int start , int end){
    queue<int> q;
    q.push(start);
    map<int,int> mappy;
    bool found = false;
    int iAm;
    while(!q.empty()){
         iAm = q.front();
        q.pop();

//        cout<<iAm<<endl;
        if(iAm == end){
            found = true;
            break;
        }
        for(int i=0;i<n;i++){
            if(edges[iAm][i]){
                if(!visited[i]){
                    visited[i] = true;
                    q.push(i);
                    mappy[i] = iAm;
                }
            }
        }
    }

    if(found){

        while(true){
            cout<<iAm<<" ";
            if(iAm==start){
                break;
            }
            iAm = mappy[iAm];

        }
    }

}

void putDFSInVector(int **edges, int n , bool *isVisited , int starting,vector<int> *ans){
    if(!isVisited[starting]){
//        cout<<starting<<" ";
        ans->push_back(starting);
        isVisited[starting] = true;
        for(int j=0;j<n;j++){
            if(edges[starting][j]){
                putDFSInVector(edges,n,isVisited,j,ans);
            }
        }
    }
}


int solve(int m,int n,vector<int>a,vector<int>b)
{
    for(int i=0;i<n;i++){
        a[i] = a[i]-1;
        b[i] = b[i] -1;
    }

    int ** edges = new int *[m];
    for(int i =0;i<m;i++){
        edges[i] = new int[m];
        for(int j=0;j<m;j++){
            edges[i][j] = 0;
        }
    }


    for(int i=0;i<n;i++){
        edges[a[i]][b[i]]  = 1;
        edges[b[i]][a[i]] = 1;
    }


    bool *isVisited = new bool[n];
    for(int i=0;i<n;i++){
        isVisited[i] = false;
    }

    printDFS(edges, n , isVisited , 0);
    int count=1;

        for(int i=0;i<n;i++){
        if(!isVisited[i]){
            printDFS(edges, n , isVisited ,i);
            count++;
        }

    }
    return  count;



    }




int main() {

//    N is number of verticed and n count of edges
    int n, e;
    cin>>n>>e;

    int ** edges = new int *[n];
    for(int i =0;i<n;i++){
        edges[i] = new int[n];
        for(int j=0;j<n;j++){
            edges[i][j] = 0;
        }
    }

    for(int i=0;i<e;i++){
        int start,end;
        cin>>start>>end;
        start-=1;
        end-=1;
        edges[start][end]  = 1;
        edges[end][start] = 1;
    }

    bool *isVisited = new bool[n];
    for(int i=0;i<n;i++){
        isVisited[i] = false;
    }


//    Print all traveral in increasign order
//    vector<int> * dfs = new vector<int>();
//    putDFSInVector(edges, n , isVisited , 0, dfs);
//    sort(dfs->begin(),dfs->end());
//    for(int i=0;i<dfs->size();i++){
//        cout<<dfs->at(i)<<" ";
//    }
//    cout<<endl;
//
//    for(int i=0;i<n;i++){
//        if(!isVisited[i]){
//            dfs->clear();
//            putDFSInVector(edges,n,isVisited,i,dfs);
//            for(int i=0;i<dfs->size();i++){
//                cout<<dfs->at(i)<<" ";
//            }
//            cout<<endl;
//        }
//
//    }


map<int,int> reachables;
    vector<int> * dfs = new vector<int>();
    putDFSInVector(edges, n , isVisited , 0, dfs);
    for(int i=0;i<dfs->size();i++){
        reachables[dfs->at(i)] = dfs->size();
    }

    for(int i=0;i<n;i++){
        if(!isVisited[i]){
            dfs->clear();
            putDFSInVector(edges,n,isVisited,i,dfs);
            for(int i=0;i<dfs->size();i++){
                reachables[dfs->at(i)] = dfs->size();
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<reachables[i]<<endl;
    }


    return 0;




    }

