#include <stdio.h>

int main() {

    int a,i,j,k,spc=1,rows;
    printf("enter the no:-");
    scanf("%d",&a);

    spc=rows+4-1;
    for(i=0;i<=a;i++)
    {
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