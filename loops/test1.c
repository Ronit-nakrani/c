#include <stdio.h>
int main() {

    int n,i,j,k,spc1;
    printf("enter the number ");
    scanf("%d",&n);
    spc1=n+(n-2);
    for(i=1;i<=n;i++){
        for(k=spc1;k>=i;k--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    spc1--;
    return 0;
}
