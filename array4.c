#include <stdio.h>
int main() {

    int i,n;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&n);
    printf("Input %d elements in the array : \n",n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("element - %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("The elements stored in the first array are : ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nThe elements copied into the second array are : ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}