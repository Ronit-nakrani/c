#include <stdio.h>

int main() {

int no,i,j,sum=0;
printf("enter the no");
scanf("%d",&no);

for(i=1;i<no;i++){
    printf("%d",i);
    sum =sum+i;
}
printf("\n the sum is %d",sum);
}