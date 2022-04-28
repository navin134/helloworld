#include <stdio.h>
#include <math.h>

/* int power12(int lloops) {

   int num = 1;
   for(int i=0; i<lloops; i++) {
       num *= 12;

   }

    return num;
} */

int main() {
    
   int inp = 5, num = 1;
  /*  printf("Please enter power: ");
   scanf("%d", &inp); */
   for(int i=0; i<inp; i++) {
       num *= 12;

   }

    printf("number: %d", num);

    return 0;
}
