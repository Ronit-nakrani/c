#include <stdio.h>

int main() {

    int no,i,j;
    printf("enter the no\n");
    scanf("%d",&no);

    for(i=1;i<=no;i++){
        j=i*i*i;
        printf("number is : %d and the cube of %d is %d\n",i,i,j);
    }
    return 0;
}