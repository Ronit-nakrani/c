#include <stdio.h>
int main() {

    int element[10];
    for(int i=1;i<=10;i++){
        printf("element - %d : \n",i);
        scanf("%d ",&element[i]);
    }
    return 0;
}