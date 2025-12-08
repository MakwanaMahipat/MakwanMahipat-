#include <stdio.h>
#include<conio.h>

void main() {
    int n; 
    //char c='a'; 
  
    
    for(int a = 1;  a<=5; a++) {
        for(int b = 1; b <=7; b++) {

            
            if (a == 1 || a == 5|| b== 1 || b==7)//|| b==5)
             {
           //  (b == 1 || b == 5|| a== 1 || a==5 )
             
                 
               printf("* ");
                //printf("%d",c);
            }
            else if(a==2 && b==2){
                printf("B ");
                //printf("\nMahipat");
            }
            else if(a==2 && b==3)
            {
                printf("C ");
            }
            else if(a==2 && b==4)
            {
                printf("A ");
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
