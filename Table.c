#include<stdio.h>
#include<conio.h>
void main()
{
    int a,num;
    clrscr();
    scanf("%d",&num);
    printf("table\t\n");
    for(a=1;a<=10; a++)
    {
        printf("%d*%d=%d\n",num,a,num*a);
    } 
    printf("\t\nWELCOME");  
    getch();
 }
