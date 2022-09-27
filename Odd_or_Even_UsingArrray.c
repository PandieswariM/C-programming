/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>

int main()
{
    int a[100],b[100],c[100],n,i,j=0,k=0,sum = 0;
    printf("Enter array size\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i = 0; i < n; i++)
    scanf("%d",&a[i]);
    printf("Array elements:\n");    
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    for(i = 0; i < n; i++)
    {
    if(a[i]%2==0)
    {
        b[j]=a[i];
        j++;
    }
    else
    {
        c[k]=a[i];
        k++;
    }
    }
    printf("Even elements are\n");
    for(i=0;i<j;i++)
    {
    printf("%d\n",b[i]);
    }
    printf("odd elements are\n");
    for(i=0;i<k;i++)
    {
    printf("%d\n",c[i]);
    }
    
    
    /*for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        printf("%d\n",a[i]);
    }
    printf("odd elements are\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        printf("%d\n",a[i]);
    }*/
    
    return 0;
}



