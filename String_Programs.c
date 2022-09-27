/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{
    char a[50]="pandieswari murugan";     //string decclaration
    int i;
    /*printf("%c\n",a[4]); //print single character
    
    printf("%d\n",strlen(a)); //print length of string
   
    for(i=0;a[i]!='\0';i++);  //print length of string
    printf("%d",i);*/  
    
    /* int count=0;
    for(i=0;a[i]!='\0';i++)
    {
        count++;             //count the length of string
    }
    printf("%d",count);*/
    
    //printf("%ld",sizeof(a));   //find the size of string
    
    int vowel,count=0;
    char b[50]="pandiesw2001 @gmail . com";
    /*for(i=0;b[i]!='\0';i++)
    {
        if(b[i]=='0'||b[i]=='1'||b[i]=='2'||b[i]=='3'||b[i]=='4'||b[i]=='5'||b[i]=='6'||b[i]=='7'||b[i]=='8'||b[i]=='9')
        count++;
    }*/
    
    /*for(i=0;b[i]!=0;i++)
    {
    if(b[i]<='0'&&b[i]<='9')
    count++;
    }
    printf("NUMBER =%d",count);
    
    
     int space=0,spl=0;
    for(i=0;b[i]!='\0';i++)
    {
        if(b[i]==' ')
        space++;
        if((b[i]<='0'&&b[i]<=31)||(b[i]<='33'&&b[i]<='47')||(b[i]<='58'&&b[i]<='64')||(b[i]<='91'&&b[i]<='95')||(b[i]<='123'&&b[i]<='127'))
        spl++;
    }
    printf("space=%d",space);
    printf("special character=%d",spl);
    
    for(i=0;b[i]!='\0';i++)
    {
        if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]==)
    }*/
    
    int j;
    char c[20]="PandieSwaRi";
    //reverse order
    /*
    for(i=0;c[i]!=0;i++);         //reverse order
    printf("count=%d\n",i);
    for(j=i-1;j>=0;j--)
    {
        printf("%c",a[j]);
    }
    printf("\n");
    for(i=0;c[i]!=0;i++);      //lowercase to uppercase
    for(j=0;j<=i;j++)
    {
        printf("%c",a[j]-32);
    }*/
    
    for(i=0;c[i]!=0;i++);
    for(j=0;j<=i;j++)
    {
        if(c[j]>=65 && c[j]<=90)   //uppercase to lowercase and lowercase to uppercase
        printf("%c",c[j]+32);
        else
        printf("%c",c[j]-32);
    }
}



