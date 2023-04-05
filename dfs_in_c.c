#include <stdio.h>
#define MAX 100

int visited[MAX] = {0};
int graph[MAX][MAX]={
    {0,1,1,0},
    {1,0,0,1},
    {1,0,0,1},
    {0,1,1,0}
};

void DFS(int node) {
    visited[node]=1;
    printf("%d ",node+1);
    for(int i=0;i<MAX;i++) {
        if (graph[node][i] && !visited[i]) {
            DFS(i);
        }
    }
}

int main()
{
    DFS(0);
    return 0;
}
