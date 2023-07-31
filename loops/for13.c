#include <stdio.h>
int main() {

    int i,j,k,m=1,row,spc;
    printf("enter the no of row:");
    scanf("%d",&row);
    spc=row+4-1;

    for(i=1;i<=row;i++){
        for(k=spc;k>=1;k--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d ",m++);
        }
        printf("\n");
        spc--;
    }
    return 0;
}