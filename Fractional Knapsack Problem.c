Aim:

To implement the Fractional Knapsack problem using the Greedy method and compute the maximum profit.

Algorithm:

1.Read number of items n
2.Read weights w[i] and profits p[i]
3.Compute unit profit up[i] = p[i] / w[i]
4.Sort items in descending order of unit profit
5.Read knapsack capacity cap
6.Initialize profit = 0
7.For each item:
   If w[i] ≤ cap:
     Take full item
     profit += p[i]
     cap -= w[i]
   Else:
     Take fractional part
     profit += up[i] * cap
     Stop
8.Display total profit
9.End

program:

#include <stdio.h>
int main()
{
    int w[10], p[10], n, i, j, cap, temp;
    float up[10], t, profit = 0.0;
    printf("Enter the number of items: ");
    scanf("%d", &n);
    printf("Enter the weights:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &w[i]);
    printf("Enter the profits:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &p[i]);
    printf("Enter the capacity: ");
    scanf("%d", &cap);
    // Calculate unit profit
    for(i = 0; i < n; i++)
        up[i] = (float)p[i] / w[i];
    // Sort by unit profit (descending)
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(up[i] < up[j])
            {
                t = up[i]; up[i] = up[j]; up[j] = t;
                temp = w[i]; w[i] = w[j]; w[j] = temp;
                temp = p[i]; p[i] = p[j]; p[j] = temp;
            }
        }
    }
    // Knapsack logic
    for(i = 0; i < n; i++)
    {
        if(w[i] <= cap)
        {
            profit += p[i];
            cap -= w[i];
        }
        else
        {
            profit += up[i] * cap;
            break;
        }
    }
    printf("Maximum profit = %.2f\n", profit);
    return 0;
}

