#include <stdio.h>

int main() {

    int no,i,j,sum=0;
    printf("enter the no\n");
    scanf("%d",&no);
    printf("the odd no is =");

    for(i=1;i<=no;i++){
        printf("%d ",2*i-1);
        sum+=2*i-1;
    }
    printf("\nthe sum is = %d",sum);
    return 0;
}