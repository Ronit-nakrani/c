#include <stdio.h>

int main() {

    int a,e;
    printf("customer IDNO ");
    scanf("%d",&a);
    char name[30];
    printf("customer name ");
    scanf("%s",&name);
    int unit;
    printf("unit consumed ");
    scanf("%d",&unit);
 
     float b=e*unit;

    if(unit<200){
    printf("Amount Charges @Rs. 1.20 per unit =%0.2f\n",1.20*unit);
   }else if(unit<400){
    printf("Amount Charges @Rs. 1.40 per unit =%0.2f\n",1.40*unit);
   }else if(unit<600){
    printf("Amount Charges @Rs. 1.50 per unit = %0.2f\n",1.50*unit);
   }else{
    printf("Amount Charges @Rs. 2.00 per unit = %0.2f\n",2.00*unit);
   }

   int c =0;
   if(e*unit>=400){    
    printf("surcharge amout = %0.2f\n",b*0.15);
  }else if(e*unit<400){
    printf("surcharge amout = 0\n");
  }else{
    printf("sorry bil must be over 100 rupees\n");
  }

   float d=b+c;
   printf("Net Amount Paid By the Customer :%0.2f\n",b+c);

   return 0;
}