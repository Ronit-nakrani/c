#include <stdio.h>
int main() {

    int n,i,x,y;
    printf("how many character in the in your name:-");
    scanf("%d",&n);

    char z[1],a;
    for(i=1;i<=n;i++){
        printf("enter the character :- ");
        scanf("%c \n",&z);
    for(x=1;x<=5;x++){
        for(y=1;y<=5;y++){
            printf("* ");
                if(z==a){
                    if(x==2&&y==3||x==3&&y==2||x==3&&y==3||x==3&&y==4||x==4&&y==1||x==4&&y==5){
                    printf("* ");
                    }else{
                        printf("  ");
                    }
                }
        }
        printf("\n");
    }
    }
    return 0;
}