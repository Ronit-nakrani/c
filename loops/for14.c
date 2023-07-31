#include <stdio.h>

int main() {
    int row,spc,i,j,k;
    printf("enter the no of rows:- ");
    scanf("%d",&row);
    spc=row+4-1;

    for(i=1;i<=row;i++){
        for(k=spc;k>=1;k--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
        spc--;
    }
}