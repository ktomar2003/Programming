#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define MAX 100

int graph[MAX][MAX];
int n;

int reverse_dijkstra(int source, int destination) {
    int i, j;
    int dist[n];
    int visited[n];
    for (i = 0; i < n; i++) {
        dist[i] = INT_MIN;
        visited[i] = 0;
    }
    dist[destination] = 0;
    for (i = 0; i < n; i++) {
        int max_dist = INT_MIN;
        int max_node = -1;
        for (j = 0; j < n; j++) {
            if (!visited[j] && dist[j] > max_dist) {
                max_dist = dist[j];
                max_node = j;
            }
        }
        if (max_node == -1) {
            break;
        }
        visited[max_node] = 1;
        for (j = 0; j < n; j++) {
            if (graph[j][max_node] != 0) {
                int new_dist = dist[max_node] - graph[j][max_node];
                if (new_dist > dist[j]) {
                    dist[j] = new_dist;
                }
            }
        }
    }
    return dist[source];
}

int main() {
    int m, i, j, u, v, w;
    printf("Enter the number of nodes and edges: ");
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            graph[i][j] = 0;
        }
    }
    printf("Enter the edges and their weights:\n");
    for (i = 0; i < m; i++) {
        scanf("%d %d %d", &u, &v, &w);
        graph[u][v] = w;
    }
    int source, destination;
    printf("Enter the source and destination nodes: ");
    scanf("%d %d", &source, &destination);
    int longest_path = reverse_dijkstra(source, destination);
    printf("The longest path from node %d to node %d has length %d.\n", source, destination, longest_path);
    return 0;
}
