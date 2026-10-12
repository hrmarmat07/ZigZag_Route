#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std ;

struct Edge {
    int to ;
    double w ;
};

struct Graph {
    int n = 0;
    vector<string>name ;
    vector<vector<Edge>> adj ;

    void init(int nodes){
        n = nodes ;
        name.assign(n,"");
        adj.assign(n,{});

    }

    void addEdge(int u , int v , double w){
        adj[v].push_back({v,w});
        adj[u].push_back({u,w});


    }

    void print() const {
        for(int u = 0 ; u < n ; u++){
            cout << name[u] << ":";
            for(Edge e : adj[u]){
                cout << " " << name[e.to] << "(" << e.w << ")";
                cout << endl ;
            }
        }
        
    }
};