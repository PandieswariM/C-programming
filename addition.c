/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,a,b,e,t;
    float c,d,f;
    do
    {
    printf("Addition operation\n");
    printf("1.Two Integer\n2.Two Float\n3.One Integer One Float\n");
    printf("enter the number\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("enter the two number\n");
        scanf("%d%d",&a,&b);
        printf("Add=%d",a+b);
        break;
        case 2:
        printf("Enter the two number\n");
        scanf("%f%f",&c,&d);
        printf("Add=%f",c+d);
        break;
        case 3:
        printf("enter the integer value\n");
        scanf("%d",&e);
        printf("enter the float value\n");
        scanf("%f",&f);
        printf("Add=%f",e+f);
        break;
    }
    printf("\nIf you want to continue press 1\n");
    scanf("%d",&t);
    }while(t==1);
}

