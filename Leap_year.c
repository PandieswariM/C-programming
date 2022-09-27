/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j;
    int a[5]={2000,1900,2400,2020,2001};
    for(i=0;i<5;i++)
    {
        if(((a[i]%4==0)&&(a[i]%100!=0))||(a[i]%400==0))
    printf("%d leap year\n",a[i]);
    else
    printf("%d not leap year\n",a[i]);
    }
    
}

