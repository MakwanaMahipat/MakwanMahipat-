#include <stdio.h>
#include<conio.h>

void main() {
    int n; 
    //char c='a'; 
  
    
    for(int a = 1;  a<=10; a++) {
        for(int b = 1; b <=10; b++) {

            
            if (a == 1 || a == 10|| b== 1 || b==10 )//|| b==5)
             {
           //  (b == 1 || b == 5|| a== 1 || a==5 )
             
                 
               printf("* ");
                //printf("%d",c);
            }
            else if(a==5 && b==5){
                printf("A ");
                //printf("\nMahipat");
            }
            else 
            {
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
