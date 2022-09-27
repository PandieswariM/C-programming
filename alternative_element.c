/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Alternate elements of a given array
#include <stdio.h>   
void main()  
{  
    int array[100];  
    int i, j, t, n;  
    printf("Enter the array size\n");
    scanf("%d",&n);
    printf("enter the element of an array \n");  
    for (i = 0; i < n; i++) 
    scanf("%d", & array[i]);  
    printf("Alternate elements of a given array \n");  
    for (i = 0; i < n; i += 2) 
    printf("%d\n", array[i]);  
} 

