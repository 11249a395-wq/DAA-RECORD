Aim:

To write a C program to solve the Tower of Hanoi problem using recursion and display the sequence of moves.

Algorithm:

1.Start
2.Read the number of disks n
3.Call function toh(n, source, destination, auxiliary)
4.If n == 1
  Move disk from source to destination
5.Else
  Move n-1 disks from source to auxiliary
  Move nth disk from source to destination
  Move n-1 disks from auxiliary to destination
6.Repeat until all disks are moved
7.Stop


PROGRAM:

#include <stdio.h>
void toh(int n, char x, char y, char z)
{
    if(n == 1)
    {
        printf("\nDisk %d: %c -> %c", n, x, y);
    }
    else
    {
        toh(n-1, x, z, y);
        printf("\nDisk %d: %c -> %c", n, x, y);
        toh(n-1, z, y, x);
    }
}
int main()
{
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    toh(n, 'A', 'B', 'C');
    return 0;
}





Result:

The Tower of Hanoi problem was successfully solved using recursion.
The sequence of steps required to move all disks from the source peg
to the destination peg was displayed correctly.
