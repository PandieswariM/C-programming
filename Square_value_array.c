/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Square of all elements in an array
#include <stdio.h>
int main()
{
	int arr[10], sqr[10], i, j, Size, Count = 0;
	printf("\n Enter Number of elements in an array :");
	scanf("%d", &Size);
	printf("\n Please Enter %d elements of an Array :", Size);
	for (i = 0; i < Size; i++)
	{
    	scanf("%d", &arr[i]);
   	}     
	for (i = 0; i < Size; i++)
	{
		sqr[i]=arr[i]*arr[i];
	}
 	printf("\n Square of all elements in an array :");
	for (i = 0; i < Size; i++)
	{
    	printf("%d\t", sqr[i]);
   	}     
 	return 0;
}

