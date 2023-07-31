#include <stdio.h>

int main() {

    int no,j,i,sum=0;
    printf("enter the no of terms:-");
    scanf("%d",&no);

    j=2*no;
    for(i=2;i<=j;i=i+2){
        printf("%d ",i);
        sum+=i;
    }
    printf("\nthe sum of first %d even terms is = %d",no,sum);
    return 0;
}