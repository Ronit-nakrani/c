#include <stdio.h>
int main() {


    int no;
    float i,sum=0;
    printf("input the number of terms:-");
    scanf("%d",&no);

    for(i=1;i<=no;i++){
        sum+=1/i;
    }
    printf("\nthe sum upto %d terms = %f",no,sum);
    return 0;
}