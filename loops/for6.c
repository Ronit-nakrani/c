#include <stdio.h>

int main() {

    int no,i,j;
    printf("enter the no ");
    scanf("%d",&no);

    for(i=1;i<11;i++){
        j=no*i;
        printf("%d x %d = %d\n",no,i,j);
    }
    return 0;
}