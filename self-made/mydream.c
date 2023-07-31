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
                printf("error please enter valid no of day \n");
                continue;
            }
        printf("enter the month of the year ");
        scanf("%d",&mm[i]);    
            if(mm[i]<1 || mm[i]>12){
                printf("error please enter the valid month \n");
                continue;
            }
        printf("enter the year ");
        scanf("%d",&yy[i]);
        
        printf("enter the challon no ");
        scanf("%d",&challon[i]);
        printf("enter the pcs ");
        scanf("%d",&pcs[i]);
        printf("enter the rate of one pcs ");
        scanf("%f",&rate[i]);

        amount[i]=rate[i]*pcs[i];
        printf("the amount of lot %d = %0.2f ",i,amount[i]);
        printf("\n");
        
    }
        printf(" __________ ____________ __________ _____________ ______________\n");     
        printf("|   Date   | Challan no |   pcs    |    rate     |     amount   |\n");
        printf("|__________|____________|__________|_____________|______________|\n");
    for(i=1;i<=n;i++){ 
        printf("|%2d/%2d/%4d %d          %5d         %0.2f         %7.2f       |\n",dd[i],mm[i],yy[i],challon[i],pcs[i],rate[i],amount[i]);
        printf("|_____________________________________________________________|\n");
    }  
    
    return 0;
}