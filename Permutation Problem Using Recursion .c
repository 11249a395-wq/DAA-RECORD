Aim:

To write a C program to generate all possible permutations of a given set of elements using recursion.

Algorithm:
1.Start
2.Read number of elements n
3.Read the array elements
4.Call perm(arr, start, stop)
5.If start == stop
  Print the array (one permutation)
6.Else
 For each index from start to stop-1:
   Swap arr[start] with arr[i]
   Recursively call perm(arr, start+1, stop)
   Backtrack (swap again to restore original array)
7.Repeat until all permutations are generated
8.Stop

PROGRAM:
#include <stdio.h>

void perm(int arr[], int start, int stop)
{
    int temp;

    if(start == stop)
    {
        for(int i = 0; i < stop; i++)
            printf("%d\t", arr[i]);
        printf("\n");
    }
    else
    {
        for(int i = start; i < stop; i++)
        {
            // Swap
            temp = arr[i];
            arr[i] = arr[start];
            arr[start] = temp;
            perm(arr, start + 1, stop);
            // Backtrack (restore original)
            temp = arr[i];
            arr[i] = arr[start];
            arr[start] = temp;
        }
    }
}
int main()
{
    int n, i, a[10];
    printf("Enter total number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    perm(a, 0, n);
    return 0;
}




Result:

The program successfully generated all possible permutations of the given elements using recursion. 
The concept of backtracking was used to ensure all arrangements were explored.
