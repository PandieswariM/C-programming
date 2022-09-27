/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int m1,m2,m3,m4,m5,tot;
    float avg;
    printf("Enter the 5 subject marks\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    tot=m1=m2+m3+m4+m5;
    avg=tot/5;
    if(avg>90)
    printf("O Grade");
    else if(avg>80)
    printf("A Grade");
    else if(avg>70)
    printf("B Grade");
    else if(avg>60)
    printf("C Grade");
    else 
    printf("D grade");
}

