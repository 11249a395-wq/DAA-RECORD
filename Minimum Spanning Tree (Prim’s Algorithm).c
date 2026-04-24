Aim:

To implement Prim’s Algorithm to find the Minimum Spanning Tree (MST) of a given graph.

Algorithm: PRIM_MST

1.Start
2.Read number of vertices n and cost matrix
3.Initialize visited[n] = {0}
4.Set visited[0] = 1 (start from vertex 0)
5.For i = 0 to n-2:
    Set min = ∞
    For each vertex u:
     If visited[u] == 1:
      For each vertex v:
       If visited[v] == 0 AND cost[u][v] < min:
    Update min
    Store edge (u, v)
  Print selected edge and cost
  Mark visited[v] = 1
6.Stop

program:
#include <stdio.h>
#include <limits.h>
int main()
{
    int n, i, j, u, v, min;
    int cost[10][10], visited[10] = {0};
    int x = 0, y = 0; // to store edge
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter adjacency matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &cost[i][j]);
    visited[0] = 1;
    printf("Edges in MST:\n");
    for(i = 0; i < n - 1; i++)
    {
        min = INT_MAX;
        for(u = 0; u < n; u++)
        {
            if(visited[u])
            {
                for(v = 0; v < n; v++)
                {
                    if(!visited[v] && cost[u][v] < min)
                    {
                        min = cost[u][v];
                        x = u;
                        y = v;
                    }
                }
            }
        }
        printf("Edge %d - %d : Cost = %d\n", x, y, min);
        visited[y] = 1;
    }
    return 0;
}


Result:

Prim’s Algorithm was successfully implemented to find the Minimum Spanning Tree. 
The program correctly selected edges with minimum cost connecting all vertices without forming cycles.
