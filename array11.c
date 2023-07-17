#include <stdio.h>
int main() {

    int n,i,j=0,k=0;
    printf("enter the number of n ");
    scanf("%d",&n);
    int array1[n],array2[n],array3[n];
    for(i=0;i<n;i++){
        printf("element %d = ",i);
        scanf("%d",&array1[i]);
    }
    for(i=0;i<n;i++){
        if(array1[i]%2 == 0){
            array2[j] = array1[i];
            j++;
        }else{
            array3[k] = array1[i];
            k++;
        }
    }
    printf("\nthe even elements are :- ");
    for(i=0;i<j;i++){
        printf("%d ",array2[i]);
    }
    printf("\nthe odd elements are :- ");
    for(i=0;i<k;i++){
        printf("%d ",array3[i]);
    }
    printf("\n\n");
    return 0;
}