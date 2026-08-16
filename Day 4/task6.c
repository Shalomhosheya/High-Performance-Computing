#include <stdio.h>

int main() {
   
    for (int a = 0; a <= 7; a++)
   {
    for(int i = a; i <= 7; i++) {
        printf("  ");
    }

       for(int c = 0; c <= a; c++) {
        printf(" *");
      } 

      
      printf("\n");
   }
  
    }
