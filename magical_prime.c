/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,flag=0,r,n1=0,t;
    printf("enter the number\n");
    scanf("%d",&n);
    t=n;
    
    for(i=2;i<=n/2;++i)
    {
        if(n%i==0)
        {
         flag=1;
        }
    }
    
    if(flag==0)
    {
       do
        {
            r=t%10;
            n1=n1*10+r;
            t=t/10;
        }while(t>0);
        
      for(i=2;i<=n1/2;++i)
      {
        if(n1%i==0)
        {
         flag=1;
        }
      }
    if(flag==0)
        printf("magical prime number\n");
    else
        printf("not a prime number");
    }
    
    else
        printf("not a prime number");
}




