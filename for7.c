#include <stdio.h>

int main() {

    int no,i,j,k;
    printf("the table 1 from ");
    scanf("%d",&no);

    for(i=1;i<=no;i++){
        for(j=1;j<11;j++){
            k=i*j;
            printf("%d x %d = %d, ",j,i,k);
        }
        printf("");
    }
    return 0;
}