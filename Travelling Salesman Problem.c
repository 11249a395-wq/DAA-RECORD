Aim:

To implement the Travelling Salesman Problem (TSP) using recursion and find the minimum tour cost.

Algorithm: TSP(city):

1.Mark current city as visited
2.Initialize min_cost = ∞
3.For each city i = 1 to n:
   If city i is not visited AND cost[city][i] ≠ 0:
    Compute temp = cost[city][i] + TSP(i)
    Update min_cost = min(min_cost, temp)
4.Mark current city as unvisited (backtracking)
5.If min_cost == ∞:
   Return cost[city][0] (return to starting city)
6.Else:
   Return min_cost
7.End

Program:

#include <stdio.h>
#include <limits.h>
int n, cost[10][10], visited[10];
int min(int a, int b)
{
    return (a < b) ? a : b;
}
int tsp(int city)
{
    int i, min_cost = INT_MAX, temp;
    visited[city] = 1;
    for (i = 0; i < n; i++)
    {
        if (!visited[i] && cost[city][i] != 0)
        {
            temp = cost[city][i] + tsp(i);
            min_cost = min(min_cost, temp);
        }
    }
    visited[city] = 0; // backtracking

    if (min_cost == INT_MAX)
        return cost[city][0]; // return to start
    else
        return min_cost;
}
int main()
{
    int i, j;
    printf("Enter number of cities: ");
    scanf("%d", &n);
    printf("Enter cost matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &cost[i][j]);
    printf("Minimum tour cost: %d\n", tsp(0));
    return 0;
}


  
Result:

The Travelling Salesman Problem was successfully implemented using recursion. 
The program computed the minimum cost required to visit all cities exactly once and return to the starting city.
