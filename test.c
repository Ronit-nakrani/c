#include <stdio.h>
int main(){
    int n,i,j,k,spc;
    printf("enter the no ");
    scanf("%d",&n);
    //spc=n+(n-2);
    for(i=1;i<=n;i++){
        // for(k=spc;k>=n;k--){
        //     printf(" ");s
        // }
        for(j=1;j<=i;j++){
            if(j%2==0){
                printf(" * ");
            }else{
                printf(" 1 ");
            }
        }
        printf("\n");
        spc--;
    }
    return 0;
}