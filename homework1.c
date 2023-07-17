#include<stdio.h>

int main() {

int a;
printf("enter the value of a");
scanf("%d",&a);

if(a<0){
printf("%d is negative",a);
}else if(a>0){
printf("%d is positive",a);
}else{
printf("%d is zero",a);
}

retun 0;
}