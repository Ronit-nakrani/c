#include <stdio.h>
int main() {
    int n,i,j,k,spc;
    printf("enter the number:");
    scanf("%d",&n);
    spc=n-1;
    for(i=1;i<=n;i++){
        for(k=spc;k>=i;k--){
            printf("  ");
        }
        for(j=n;j>n-i;j--){
            printf("* ");
        }
        for(j=n-i+2;j<n+1;j++){
            printf("* "); 
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(k=spc;k>=i;k--){
            printf("  ");      
        }
        for(j=n;j>n-i;j--){
            printf("* ");
        }
        for(j=n-i+2;j<n+1;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}