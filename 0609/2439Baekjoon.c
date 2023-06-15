#include <stdio.h>

int main(void) {
   int lineNum = 0;
   scanf("%d", &lineNum);
   for(int i=0; i < lineNum; i++) {
      for(int k=0; k < lineNum - (i+1); k++) {
         printf(" ");
      }
      for(int j=0; j < i + 1; j++) {
         printf("*");
      }
      printf("\n");
   }
}
