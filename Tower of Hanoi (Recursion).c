Aim:

To implement the Tower of Hanoi problem using recursion and display the sequence of disk movements.

Algorithm: TOWER_OF_HANOI(n, Source, Destination, Auxiliary)

1.If n = 1 then
  Print: Move disk 1 from Source to Destination
  Return
2.Call TOWER_OF_HANOI(n-1, Source, Auxiliary, Destination)
3.Print: Move disk n from Source to Destination
4.Call TOWER_OF_HANOI(n-1, Auxiliary, Destination, Source)
5.End

Program:
#include <stdio.h>
void tower(int n, char from, char to, char aux)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }
    tower(n - 1, from, aux, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    tower(n - 1, aux, to, from);
}
int main()
{
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);
    tower(n, 'A', 'C', 'B');
    return 0;
}




Result:

The Tower of Hanoi problem was successfully implemented using recursion. 
The program correctly displayed the sequence of moves required to transfer 
all disks from the source peg to the destination peg following the rules.
