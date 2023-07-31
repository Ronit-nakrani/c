#include <stdio.h>

int main() {

    int no,sum=0,i;
    float avg;
    printf("enter the no\n");
    scanf("%d",&no);

    for(i=1;i<=no;i++){
        printf("number-%d = ",i);
        scanf("%d",&i);
        sum=sum+i;
    }
    printf("the sum of %d no = %d\n",no,sum);
    avg=sum/no;
    printf("the average is = %f\n",avg);
    return 0;
}