/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int t,i,j,n;
    printf("Enter the array size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d elements :\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(a[i]<a[j])
        {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        }
        }
    }
    printf("Descending order \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}



