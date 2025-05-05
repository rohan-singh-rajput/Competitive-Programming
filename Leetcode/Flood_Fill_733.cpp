#include<vector>
#include<iostream>

using namespace std;

typedef vector<vector<int>> graph;


typedef vector<int> vi;

void add_undirected_edge(graph &g,int from,int to){
    g[from][to] += 1;
    g[to][from] += 1;
}


bool isValid(graph &image, int sr, int sc, int newColor){

}





int main(void){


    return 0;
}