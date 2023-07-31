#include <Stdio.h>
int main() {

    int n,i,j,k,spc;
    printf("enter the number:");
    scanf("%d",&n);
    spc=n+(n-2);
    for(i=1;i<=n;i++){
        for(k=spc;k>=i;k--){
            printf("  ");
        }
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        for(j=i-1;j>=1;j--){
            printf("%d ",j);
        }
            printf("\n");
    }
    return 0;
}