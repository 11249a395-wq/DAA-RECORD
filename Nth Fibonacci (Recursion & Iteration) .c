Aim:

To write a C program to find the Nth Fibonacci number using both recursion and iteration methods.

Algorithm: FIB_RECURSIVE(n)

1,If n <= 1, return n
2.Else return FIB_RECURSIVE(n-1) + FIB_RECURSIVE(n-2)
3.End

Algorithm: FIB_ITERATIVE(n)

1.If n = 0, return 0
2.Initialize a = 0, b = 1
3.For i = 2 to n:
  c = a + b
  a = b
  b = c
4.Return b
5.End

Program:
#include <stdio.h>
int fib_rec(int n)
{
    if (n <= 1)
        return n;
    return fib_rec(n-1) + fib_rec(n-2);
}
int fib_iter(int n)
{
    int a = 0, b = 1, c, i;
    if (n == 0)
        return 0;
    for (i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Recursive Fibonacci: %d\n", fib_rec(n));
    printf("Iterative Fibonacci: %d\n", fib_iter(n))
    return 0;
}



Result:

The program successfully computed the Nth Fibonacci number using both recursion and iteration. 
Both methods produced the same result, verifying correctness.
