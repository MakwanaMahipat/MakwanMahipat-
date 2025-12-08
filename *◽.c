#include <stdio.h>
#include<conio.h>

void main() {
    int n;  
  //int c=1;
    
    for(int a = 1;  a<=5; a++) {
        for(int b = 1; b <=5; b++) {

            
            if (b == 1 || a == 5|| b == a )//|| b==5)
             {
                printf("* ");
                //printf("a");
            }else {
                printf("  ");
              //  printf("%d",c);
                
            }
           // printf("a");
        }
        //printf("a");
        printf("\n");
    }

    getch();
}
