#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter the table value\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",i,n,i*n);
    }
    
    /*while(i<=10)
    {
        printf("%d*%d=%d\n",i,n,i*n);
        i++;
    }*/
    
}

