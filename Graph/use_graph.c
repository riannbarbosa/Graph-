#include <stdlib.h>
#include <stdio.h>
#include "graph.h"

int main()
{
    int vertexNumber;
    Graph *graph;

    scanf("%d", &vertexNumber);

    graph = GRAPHbuild(vertexNumber);

    Edge edge = EDGE(0, (vertexNumber - 1));

    GRAPHinsert(graph, edge);

    if (GRAPHedgesVerify(graph, edge))
        printf("Inserted\n");
    else
        printf("Not inserted\n");


    void GRAPHdestroy(graph);
    
    return 0;
}
