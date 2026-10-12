#include "graph.h"

int main() {
    Graph g ;
    g.init(4) ;
    g.name = {"A", "B", "C", "D"} ;
    g.addEdge(0, 1, 4) ;
    g.addEdge(0, 2, 2) ;
    g.addEdge(2, 1, 1) ;
    g.addEdge(1, 3, 5) ;
    g.print() ;
    return 0 ;
}