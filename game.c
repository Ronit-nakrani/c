#include <stdio.h>

int main() {

    int i,x;
    for(i=1;i<=x;i++){

    int no,a;
    printf("enter the no:- ");
    scanf("%d",&no);

    do{
      if(no<=100){
       printf("plz tell the no is above(1) 50, below(2) 50 or equal(3) to 50?\n");
       scanf("%d",&a);
      }else{
        printf("error : enter the valid no\n",no);
      }break;

    if(a==1){
        if(no>50){
            printf("the value is above 50\n");
        }else{
            printf("error");
        }break;
       }     
    else if(a==2){
        if(no<50){
            printf("the value is below 50\n");
        }else{
            printf("error");
        }break;
       } 
    else if(a==3){
        if(no==50){
        printf("the value is 50\n");
        }else{
            printf("error\n");
        }break;
       }
    else{
        printf("error : enter the valid no\n",a);
       }break;
}while(no<=100);

       printf("the value you entered is %d\n",no);
    }
       
  return 0;
}