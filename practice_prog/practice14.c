#include <stdio.h>

int main() {

    int a,b,c;
    printf("enter the length a \n");
    scanf("%d",&a);
    printf("enter the length b \n");
    scanf("%d",&b);
    printf("enter the length c \n");
    scanf("%d",&c);

    if(a==b && b==c){
        printf("the triangle is equilateral");
    }else if(a==b || b==c || a==c){
        printf("the triangle is isosceles");
    }else {
        printf("the triangle is scalene");
    }
    return 0;
}