#include <stdio.h>

int main() {
    
    int year;
    printf("enter the year");
    scanf("%d",&year);
 
    
    if(year%4==0){
        printf("the %d is leap year",year);
    }else{
        printf("the %d is not an leap year",year);
    }
    
    return 0;
}