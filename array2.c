#include <stdio.h>

int main() {

    int n,i,j;
    printf("Input the number of elements to store in the array : ");
    scanf("%d",&n);
    printf("Input %d number of elements in the array :\n",n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("element %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("the elements are :");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nThe values store into the array in reverse are : ");
    for(i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}