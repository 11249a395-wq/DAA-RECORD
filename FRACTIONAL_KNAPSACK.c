Aim:

To implement the Fractional Knapsack problem using the Greedy approach and find the maximum profit.

Algorithm: FRACTIONAL_KNAPSACK

1.Read number of items n
2.For each item i = 1 to n:
   Read weight[i], profit[i]
   Compute ratio[i] = profit[i] / weight[i]
3.Sort items in decreasing order of ratio
4.Read knapsack capacity CAP
5.Initialize profit = 0
6.For each item i = 1 to n:
    If weight[i] ≤ CAP:
     Add full item → profit += profit[i]
     Reduce capacity → CAP -= weight[i]
    Else:
     Take fractional part → profit += ratio[i] * CAP
     Break
7.Print total profit
8.End

Program:

#include<stdio.h>
int main()
{
    int n, i, j;
    float w[10], p[10], ratio[10], temp, capacity, profit = 0;
    printf("Enter number of items: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter weight and profit of item %d: ", i + 1);
        scanf("%f %f", &w[i], &p[i]);
        ratio[i] = p[i] / w[i];
    }
    printf("Enter knapsack capacity: ");
    scanf("%f", &capacity);
    // Sorting by decreasing ratio
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (ratio[i] < ratio[j])
            {
                temp = ratio[i]; ratio[i] = ratio[j]; ratio[j] = temp;
                temp = w[i]; w[i] = w[j]; w[j] = temp;
                temp = p[i]; p[i] = p[j]; p[j] = temp;
            }
        }
    }
    // Knapsack filling
    for (i = 0; i < n; i++)
    {
        if (w[i] <= capacity)
        {
            profit += p[i];
            capacity -= w[i];
        }
        else
        {
            profit += ratio[i] * capacity;
            break;
        }
    }
    printf("Maximum profit = %.2f\n", profit);
    return 0;
}

