#include<stdio.h>

int main() {
    
    float a;
    printf("value of a is \n");
    scanf("%f",&a);
     
    float b;
    printf("value of b is \n");
    scanf("%f",&b);
    
    float add = a+b;
    printf("a + b = %f\n",add);
    
    float diff = a-b;
    printf("a - b = %f\n",diff);

    float mul = a*b;
    printf("a * b = %f\n",mul);
    
    float divi = a/b;
    printf("a / b = %f\n",divi);

 return 0;
}