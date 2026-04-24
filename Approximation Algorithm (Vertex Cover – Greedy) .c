AIM: 
   To implement an approximation algorithm for Vertex Cover using a greedy approach and
find the vertex cover of a given graph using an adjacency matrix.
   
Algorithm VertexCover(graph, n) 

1. Initialize visited[0…n-1] ← false  
2. For i ← 0 to n-1 do 
For j ← i+1 to n-1 do 
If graph[i][j] = 1 AND visited[i] = false AND visited[j] = false then 
a. visited[i] ← true 
b. visited[j] ← true 
c. Output (i, j) 
3. Stop 


PROGRAM:

#include <stdio.h>  
int main() { 
    int n, i, j; 
    int graph[10][10], visited[10] = {0};  
    printf("Enter number of vertices: "); 
    scanf("%d", &n);  
    printf("Enter adjacency matrix:\n"); 
    for (i = 0; i < n; i++) 
        for (j = 0; j < n; j++) 
            scanf("%d", &graph[i][j]); 
    printf("Vertex Cover:\n"); 
    for (i = 0; i < n; i++) { 
        for (j = i+1; j < n; j++) { 
            if (graph[i][j] && !visited[i] && !visited[j]) { 
                visited[i] = visited[j] = 1; 
                printf("%d %d\n", i, j); 
            } 
        } 
    } 
    return 0; 
}
