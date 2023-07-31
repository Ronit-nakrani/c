#include <stdio.h>

int main() {

    int a,i,j;
    printf("enter the no ");
    scanf("%d",&a);

    for(i=0;i<=a;i++){
        for(j=0;j<=i;j++){
            printf(" ");
        }
        printf("R");
    printf("\n");
    }
    return 0;
}