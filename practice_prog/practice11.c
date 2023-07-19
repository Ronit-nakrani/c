#include <Stdio.h>

int main() {
    
    int a;
    printf("enter the value");
    scanf("%d",&a);

    if(a%2!=0){
        printf("root are imagnory\nno solutions.");
    }else{
        printf("root are possible");
    }
    return 0;
}