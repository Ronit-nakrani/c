#include <stdio.h>

int main() {

    int no,i,sum=1;
    printf("enter the no:-");
    scanf("%d",&no);

    for(i=1;i<=no;i++){
        printf("%d ",i);
        sum*=i;
    }
    printf("\nthe factorial of %d is = %d ",no,sum);
    return 0;
}