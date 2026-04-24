Aim:

To compute the maximum flow from a source to a sink in a flow network using the Ford–Fulkerson method (simplified).

Algorithm:

1.Read number of vertices n and capacity matrix cap[n][n]
2.Read source s and sink t
3.Initialize flow = 0
4.For each vertex i = 0 to n-1:
   Compute f = min(cap[s][i], cap[i][t])
   Add f to flow
5.Print Maximum flow = flow
6.Stop

program:

#include <stdio.h>
int min(int a, int b)
{
    return (a < b) ? a : b;
}
int main()
{
    int n, i, j, s, t;
    int cap[10][10], flow = 0;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter capacity matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &cap[i][j]);
    printf("Enter source and sink: ");
    scanf("%d %d", &s, &t);
    for(i = 0; i < n; i++)
    {
        int f = min(cap[s][i], cap[i][t]);
        flow += f;
    }
    printf("Maximum flow: %d\n", flow);
    return 0;
}


  
Result:

The simplified Ford–Fulkerson method computed the maximum flow from 
the source to the sink by considering flows through intermediate vertices.
