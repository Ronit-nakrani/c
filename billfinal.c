#include <stdio.h>
int main() {

    int n,i,j;
    int dd[n],mm[n],yy[n],challon[n],pcs[n];
    float rate[n],amount[n];
    printf("enter the no of lots ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("enter the number of the day ");
        scanf("%d",&dd[i]);
            if(dd[i]<1 || dd[i]>31){
                printf("error please enter the valid no of day ");
            }
        printf("enter the month of the year ");
        scanf("%d",&mm[i]);
            if(mm[i]<1 || mm[i]>12){
                printf("error please enter the valid month of year ");
            }
        printf("enter the year ");
        scanf("%d",&yy[i]);

        printf("enter the challom no ");
        scanf("%d",&challon[i]);
        printf("enter the pcs ");
        scanf("%d",&pcs[i]);
        printf("enter the rate of one pcs ");
        scanf("%f",&rate[i]);

        amount[i]=rate[i]*pcs[i];
        printf("the amount of lot %d = %0.2f ",i,amount[i]);
        printf("\n");        
    }
        printf(" __________ ____________ _________ _________ ______________\n");
        printf("|   Date   | Challan no |   pcs   |  rate   |    amount    |\n");
        printf("|__________|____________|_________|_________|______________|\n");
    for(i=1;i<=n;i++){
        printf("|%2d/%2d/%4d|%7d     |%5d    |%5f    |%5f          |\n",dd[i],mm[i],yy[i],challon[i],pcs[i],rate[i],amount[i]);
        printf("|__________|____________|_________|_________|______________|\n");
    }
    return 0;
}