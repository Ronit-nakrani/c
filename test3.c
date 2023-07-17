#include <stdio.h>
int main() {
    int n,i,j,k,spc;
    printf("enter the number:");
    scanf("%d",&n);
    spc=n+(n-2);
    for(i=n;i>=1;i--){
        for(k=spc;k>=i;k--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            if(i%2==0){
                printf("# ");
            }else if(i%3==0){
                printf("$ ");
            }else{
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}