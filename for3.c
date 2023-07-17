#include <stdio.h>

int main() {

    int no,sum=0,i;
    printf("enter the no :-");
    scanf("%d",&no);

    for(i=1;i<=no;i++){
        printf("%d ",i);
        sum=sum+i;
    }
    printf("\nthe first %d natural no sum = %d",no,sum);
}