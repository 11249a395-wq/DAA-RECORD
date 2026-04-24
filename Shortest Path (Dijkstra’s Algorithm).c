Aim:

To implement Dijkstra’s Algorithm to find the shortest distance from a source vertex to all other vertices 
in a weighted graph.

Algorithm: DIJKSTRA

1.Start
2.Read number of vertices n and adjacency matrix cost[n][n]
3.Read source vertex src
4.Initialize:
    visited[n] = {0}
    dist[i] = cost[src][i] for all i
5.Mark visited[src] = 1
6.Repeat n-1 times:
   Find the unvisited vertex u with minimum dist[u]
   Mark visited[u] = 1
   For each vertex v not visited:
     If dist[u] + cost[u][v] < dist[v], update dist[v]
7.Print dist[i] for all vertices
8.Stop

Program:

#include <stdio.h>
#include <limits.h>
int main()
{
    int n, i, j, src;
    int cost[10][10], dist[10], visited[10] = {0};
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter adjacency matrix (0 if no edge):\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
        {
            scanf("%d", &cost[i][j]);
            if(i != j && cost[i][j] == 0) // replace 0 with INF
                cost[i][j] = INT_MAX;
        }
    printf("Enter source vertex: ");
    scanf("%d", &src);
    for(i = 0; i < n; i++)
        dist[i] = cost[src][i];
    visited[src] = 1;
    for(i = 1; i < n; i++)
    {
        int min = INT_MAX, u = -1;
        for(j = 0; j < n; j++)
        {
            if(!visited[j] && dist[j] < min)
            {
                min = dist[j];
                u = j;
            }
        }
        visited[u] = 1;
        for(j = 0; j < n; j++)
        {
            if(!visited[j] && cost[u][j] != INT_MAX && dist[u] + cost[u][j] < dist[j])
                dist[j] = dist[u] + cost[u][j];
        }
    }
    printf("Shortest distances from vertex %d:\n", src);
    for(i = 0; i < n; i++)
    {
        if(dist[i] == INT_MAX)
            printf("%d -> %d = INF\n", src, i);
        else
            printf("%d -> %d = %d\n", src, i, dist[i]);
    }
    return 0;
}


  
Result:

Dijkstra’s Algorithm was successfully implemented. The program correctly computed 
the shortest distances from the source vertex to all other vertices.
