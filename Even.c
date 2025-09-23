#include <stdio.h>
#include<conio.h>

void main() 

{
    int m;
    clrscr ();
    //scanf("%d",&m);
    for(m = 1; m <= 10; m++)
     {
        if(m % 2 == 0) 
        {
            printf("%d - even\n", m);
        } else 
        {
            printf("%d - odd\n", m);
        }
     }

    getch ();
}
