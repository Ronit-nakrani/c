#include<stdio.h>

int main() {

    int a;
    printf("enetr the value of a");
    scanf("%d",&a);

    if(a<0){
        printf("%d is negative",a);
   }if(a>0){
        printf("%d is positive",a);
   }if(a==0){
        printf("%d is zero",a);
   }

   return 0;
}