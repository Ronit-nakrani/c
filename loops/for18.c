#include <stdio.h>

int main() {

    int x,ter,i,j=1,k=1;
    printf("input the value of x:-");
    scanf("%d",&x);
    printf("input the no of terms");
    scanf("%d",&ter);

    for(i=2;i<=2*ter;i=i+2){
        for(j=1;j<=ter;j++){
            k*=j;
        printf("%f",(float)i/k);
        }
        printf("");
    }
    return 0;
}