#include <Stdio.h>

int main() {

    int no,i,j;
   

    for(i=1;i<=5;i++){
        for(j=1;j<=3;j++){
            if(i==1||j==1||i==5||j==3){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}