#include <stdio.h>
int main() {

    int no,i,j,k=1;
    printf("enter the no ");
    scanf("%d",&no);

    for(i=1;i<=no;i++){
        for(j=1;j<=i;j++){
            printf("%d ",k++);
        }
        printf("\n");
    }
    return 0;
}