#include <stdio.h>
int main() {
   
    int n,i,j;
    int dd[n],mm[n],yy[n],challon[n],pcs[n];
    float rate[n],amount[n];
    printf("enter the no of lots ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("enter the number of the day ");
        scanf("%d",&dd[n]);
            if(dd[n]<1 || dd[n]>31){
                printf("error please enter valid no of day ");
            }
        printf("enter the month of the year ");
        scanf("%d",&mm[n]);    
            if(mm[n]<1 || mm[n]>12){
                printf("error please enter the valid month ");
            }
        printf("enter the year ");
        scanf("%d",&yy[n]);
        
        printf("enter the challon no ");
        scanf("%d",&challon[n]);
        printf("enter the pcs ");
        scanf("%d",&pcs[n]);
        printf("enter the rate of one pcs ");
        scanf("%f",&rate[n]);

        amount[n]=rate[n]*pcs[n];
        printf("the amount of lot %d = %0.2f ",i,amount[n]);
        printf("\n");
        
    }
    for(j=1;j<=i;j++){
        printf(" __________ ____________ _________ _________ ______________\n");
        printf("|   Date   | Challan no |   pcs   |  rate   |    amount    |\n");
        printf("|__________|____________|_________|_________|______________|\n");
        printf("|%2d/%2d/%4d|%7d     |%5d    |%5d    |%5d          |\n",dd,mm,yy,challon,pcs,rate,amount);
        printf("|__________|____________|_________|_________|______________|\n");
        }
    
    return 0;
}