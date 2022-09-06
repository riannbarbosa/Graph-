#include <stdio.h>
#include <stdlib.h>

#include "../graph.h"

struct queue {
  int items[40];
  int front, rear;
};


void BFS(Graph *graph, Edge edge){
  Queue *q = createQueue();

  graph->matrix[edge.v1][edge.v2] =  1;
  enqueue(q, );
  
  //T0-D0

  
}