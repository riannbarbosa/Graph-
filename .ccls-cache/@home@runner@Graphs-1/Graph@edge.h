#ifndef EDGE_H
#define EDGE_H

struct edge
{
    int v1, v2;
};
typedef struct edge Edge;

Edge EDGE(int v1, int v2);

#endif