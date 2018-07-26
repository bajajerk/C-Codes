#include <iostream>
#include<algorithm>
using namespace std;

class Edge{
public:
    int source;
    int destination;
    int weight;
};

int main() {
    int n,e;
    cin>>n>>e;

    Edge * edges = new Edge[e];
    for(int i=0;i<e;i++){
        int s,d,weight;
        cin>>s;
        edges[i].source = s;

        cin>>d;
        edges[i].destination = d;

        cin>>weight;
        edges[i].weight = weight;

    }

    sort(edges,edges+e);
    return 0;
}