#include <Stdio.h>

int main() {

    int row,i,j,k,spc;
    printf("enter the no of rows:-");
    scanf("%d",&row);
    spc=row+4-1;
    
    for(i=1;i<=row;i++){
        for(k=spc;k>=1;k--){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
        spc--;
    }
    return 0;
}