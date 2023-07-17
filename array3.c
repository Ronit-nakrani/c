#include <stdio.h>

int main(){

    int n,i;
    int sum =0;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&n);
    printf("Input %d elements in the array : \n",n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("element - %d : ",i);
        scanf("%d",&arr[n]);
        sum= sum+arr[n];
    }
    printf("Sum of all elements stored in the array is : %d",sum);
    return 0;
}