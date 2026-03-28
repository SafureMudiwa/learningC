#include <stdio.h>
#include <limits.h> //for INT_MAX (represents infinity)

#define vertices 6 
#define Inf INT_MAX //infinity = unvisited node

//finds the unvisited node with smallest distance
int minDistance(int dist[], int visted[]) {
    int min = Inf;
    int min_index = -1;

    for (int v = 0; v < vertices; v++) {
        if (visited[v] == 0 && dist[v] <= min) {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index; //index of node with the samllest distance
}

//Prints final distances and paths