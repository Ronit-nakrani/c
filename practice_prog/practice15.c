#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter the first angle\n");
    scanf("%d",&a);
    printf("enter the second angle\n");
    scanf("%d",&b);
    printf("enter the third angle\n");
    scanf("%d",&c);

    int sum = a+b+c;
    if(sum==180){
        printf("the triangle is valid");
    }else {
        printf("the triangle is not valid");
    }
    return 0;
}