#include <stdio.h>
int main() {

    int i,n,mx,mn;
    printf("enter the number : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("element - %d : ",i);
        scanf("%d",&arr[i]);
    }
    mx = arr[0];
    mn = arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>mx){
            mx = arr[i];
        }
        if(arr[i]<mn){
            mn = arr[i];
        }
    }
    printf("maximum element is = %d\n",mx);
    printf("minimum element is = %d",mn);
    return 0;
}