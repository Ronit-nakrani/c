#include <stdio.h>

int main() {

   int a;
   printf("enter the first value");
   scanf("%d",&a);
   
   int b;
   printf("enetr the second value");
   scanf("%d",&b);
   
   if(a>b){
   printf("a is greter than b\n");
   } else {
      printf("a is not greter than b\n");
   }

   if(a==b){
   printf("a is equal to b\n");
   } else { 
      printf("a is not equal to b\n");
   }

   if(a<b) {
   printf("a is less than b\n");
  } else { 
   printf("a is not less than b\n");
  }
   
   return 0;
}