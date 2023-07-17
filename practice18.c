#include <stdio.h>

int main() {

    int a,b,c;
    printf("original price per product\n");
    scanf("%d",&a);
    printf("how many product you sell\n");
    scanf("%d",&b);
    printf("selling price per product\n");
    scanf("%d",&c);

    int making =a*b;
    printf("total amount of making = %d\n",making);
    int sell=b*c;
    printf("total selling amount = %d\n",sell);
    int profit = sell - making;
    printf("the profit is = %d\n",profit);

    if(profit>1500){
        printf("congratulations you are in extraordinary seller catagory");
    }else if(profit>500){
        printf("great you are in the good seller catagory");
    }else{
        printf("oopps you are in the average seller catagory");
    } 
    
    return 0; 
}