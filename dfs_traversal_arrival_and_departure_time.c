#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct Graph {
    int num_vertices;
    int adj_matrix[MAX][MAX];
};

void DFS(struct Graph* graph, int vertex, int visited[], int arrival_time[], int departure_time[], int* time) {
    visited[vertex] = 1;
    arrival_time[vertex] = (*time)++;
    
    for (int i = 0; i < graph->num_vertices; i++) {
        if (graph->adj_matrix[vertex][i] == 1 && visited[i] == 0) {
            DFS(graph, i, visited, arrival_time, departure_time, time);
        }
    }
    departure_time[vertex] = (*time)++;
}

void printTimes(int arrival_time[], int departure_time[], int num_vertices) {
    printf("Vertex\tArrival\tDeparture\n");
    for (int i = 0; i < num_vertices; i++) {
        printf("%d\t%d\t%d\n", i, arrival_time[i]-1, departure_time[i]-1);
    }
}

int main() {
    struct Graph graph = {
        .num_vertices = 4,
        .adj_matrix = {
            {0, 1, 1, 0},
            {1, 0, 0, 1},
            {1, 0, 0, 1},
            {0, 1, 1, 0}
        }
    };
    
    int visited[MAX] = {0};
    int arrival_time[MAX] = {0};
    int departure_time[MAX] = {0};
    int time = 1;
    
    DFS(&graph, 0, visited, arrival_time, departure_time, &time);
    
    printTimes(arrival_time, departure_time, graph.num_vertices);
    
    return 0;
}
