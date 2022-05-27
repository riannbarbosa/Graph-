#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

struct graph
{
    int vertexNumber, edgesNumber;
    int **matrix;
};

Graph *GRAPHbuild(int vertexNumber)
{
    Graph *graph = malloc(sizeof(*graph));
    graph->vertexNumber == vertexNumber;
    graph->edgesNumber = 0;
    // graph->matrix
    int **matrix = malloc(vertexNumber * sizeof(*matrix));

    for (int i = 0; i < vertexNumber; i++)
        matrix[i] = malloc(sizeof(*matrix[i]) * vertexNumber);

    for (int i = 0; i < vertexNumber; i++)
    {
        for (int j = 0; j < vertexNumber; j++)

            matrix[i][j] = 0;

        graph->matrix = matrix;
        return graph;
    }
}

bool GRAPHedgesVerify(Graph *graph, Edge edge)
{
    if (graph->matrix[edge.v1][edge.v2] == 1)
        return true;
    return false;
}

void GRAPHinsert(Graph *graph, Edge edge)
{
    graph->matrix[edge.v1][edge.v2] = 1;
    graph->matrix[edge.v2][edge.v1] = 1;
    graph->edgesNumber++;
}

int GRAPHvertexNumber(Graph *graph)
{
    return graph->vertexNumber;
}

int GRAPHedgeNumber(Graph *graph)
{
    return graph->edgesNumber;
}

void GRAPHremove(Graph *graph, Edge edge)
{
    if (!GRAPHedgesVerify(graph, edge))
        return;

    graph->matrix[edge.v1][edge.v2] = 0;
    graph->matrix[edge.v2][edge.v1] = 0;
    graph->edgesNumber--;
}

void GRAPHdestroy(Graph *graph)
{
    for (int i = 0; i < graph->edgesNumber; i++)
        free(graph->matrix[i]);
    free(graph);

}
