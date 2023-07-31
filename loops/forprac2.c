#include <stdio.h>

int main() {

    int i,j,k,spc=1,rows;
    printf("enter the no ");
    scanf("%d",&rows);

    spc=rows+4-1;
    for(i=0;i<=rows;i++){
        for(spc=k;k>=1;k--){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            printf("R");
        }
    printf("\n");
    spc--;
    }
    return 0;
}