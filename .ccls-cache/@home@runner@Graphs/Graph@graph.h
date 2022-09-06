#ifndef GRAPH_H
#define GRAPH_H

#include <stdbool.h>
#include "edge.h"

typedef struct graph Graph;

Graph *GRAPHbuild(int vertexNumber);

int GRAPHvertexNumber(Graph *g);

int GRAPHedgeNumber(Graph *g);

bool GRAPHedgesVerify(Graph *g, Edge edge);

void GRAPHinsert(Graph *g, Edge edge);

void GRAPHremove(Graph *g, Edge edge);

void GRAPHdestroy(Graph *g);

void print_graph(Graph *g);

void printList(Graph *g);
void empty(Graph *g, int v);
void menu();
#endif