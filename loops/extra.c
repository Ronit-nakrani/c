#include <stdio.h>

int main() {

    int no,i,j,spc,rows,k;
    printf("enter the no");
    scanf("%d",&no);

    spc=rows+4-1;
    for(i=1;i<=no;i++){
        for(k=spc;k>=1;k--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
        spc--;
    }
    return 0;
}