#include <stdio.h>
int main() {

    int n,i;
    printf("enter the no:-");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        printf("element %d :- ",i);
        scanf("%d ",&array[i]);
    }

    return 0;
}