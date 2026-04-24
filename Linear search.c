AIM: To perform a Linear Search on an array of 10,000 random numbers and measure 
the time taken to search for a key element. 


Requirements: 

Use the header files: 
stdio.h, stdlib.h, and time.h 
Generate 10,000 random numbers using rand() % 1000 
(all values should be less than 1000) 
Store these numbers in an array 
Generate a random key value (also less than 1000) to search in the array 
Ensure the key is present in the array 
Use clock_t start, end to measure execution time 
Record the time before and after the linear search using: 
start = clock(); 
end = clock(); 
Display the time taken for the search using: 
(double)(end - start) 


Objective: 

To analyze the time required to perform a linear search on a large dataset of randomly 
generated numbers. 
recursive algorithm  linear search for ex 1 
void ls(int a[], int start, int end, int key) 
{ 
if  start :=end then  print element not found 
else if a[i]:=key  then print element   
else  call  ls(a[], start+1, end, key) 
} 
void main() 
{ 
initialize n:=10000 
for i:1 to n read a[i] := rand()%1000 do   next   i  increase step 1 
key :=rand()%1000 
initialize start:=clock()  
for i:1 to 10000  
call ls(a, 0,n,key) 
initialize stop:=clock(); 
print  start-stop  
} 


PROGRAM:

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void ls(int a1[], int begin, int stop, int search)
{
    if(begin == stop)
        printf("Element not found\n");
    else if(a1[begin] == search)
        printf("Element found @ position %d\n", begin+1);
    else
        ls(a1, begin+1, stop, search);
}
int main()
{
    int a[10000], n=10000, key, i;
    clock_t start, end;
    for(i=0;i<n;i++)
        a[i] = rand()%1000;
    key = rand()%1000;
    start = clock();
    ls(a, 0, n, key);
    end = clock();
    printf("Total time taken: %lf", (double)(end - start)/CLOCKS_PER_SEC);
}


