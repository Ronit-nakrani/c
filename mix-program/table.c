#include <stdio.h>

int main() {

    int a,number;
    printf("enter the value of a ");
    scanf("%d",&a);

    for(number=1;number<11;number++){
        printf("%d \n",(number*a));
    }
    return 0;
}