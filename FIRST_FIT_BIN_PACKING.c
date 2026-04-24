Aim:

To implement the First Fit Bin Packing algorithm in C and display the remaining space in each bin after placing all items.

Algorithm: FIRST_FIT_BIN_PACKING

1.Read number of items n
2.Read bin capacity CAP
3.Initialize all bins with capacity CAP
4.For each item i = 1 to n
  For each bin j = 1 to n
   If bin[j] ≥ item[i] then
    Place item in bin
    Update bin[j] = bin[j] - item[i]
    Break
6.Display remaining space in all bins
7.End

Program:
#include<stdio.h>
int main()
{
    int n, i, j;
    float bin[10], item[10], cap;
    printf("Enter number of items: ");
    scanf("%d", &n);
    printf("Enter bin capacity: ");
    scanf("%f", &cap);
    for (i = 0; i < n; i++)
    {
        printf("Enter size of item %d: ", i + 1);
        scanf("%f", &item[i]);
        bin[i] = cap;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (bin[j] >= item[i])
            {
                bin[j] -= item[i];
                break;
            }
        }
    }
    printf("\nRemaining space in bins:\n");
    for (i = 0; i < n; i++)
    {
        printf("Bin %d: %.2f\n", i + 1, bin[i]);
    }
    return 0;
}
