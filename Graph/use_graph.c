#include <stdlib.h>
#include <stdio.h>
#include "graph.h"

#define EXIT 0
#define INSERT 1
#define DESTROY 3
#define INSERTVERTEX 4
#define LIST 2

int main()
{
    int vertexNumber;
    Graph *graph;

    int n, v, m1, m2;

    do
    {
        menu();
        scanf("%d", &n);
        switch (n)
        {
        case INSERT:
            printf("\nVertex/Nodes numbers\n:");
            scanf("%d", &v);
            graph = GRAPHbuild(v);

            break;

        case LIST:
            print_graph(graph);
            break;

        case DESTROY:
            GRAPHdestroy(graph);
            break;

        case INSERTVERTEX:
            printf("Insert first vertex\n:");
            scanf("%d", &m1);
            printf("Insert second vertex\n:");
            scanf("%d", &m2);

            Edge edge = EDGE(m1, m2);

            GRAPHinsert(graph, edge);

            if (GRAPHedgesVerify(graph, edge))
                printf("Inserted\n");

            else
                printf("Not inserted\n");

            break;
        }
    } while (n != EXIT);

    return 0;
}
