 #include<stdio.h>

 int main() {

    int temp;
    printf("enter the temprature of your aera");
    scanf("%d",&temp); 

    if(temp<0){
        printf("freezing weather");
    }else if(temp<10){
        printf("very cold weather");
    }else if(temp<20){
        printf("cold weather");
    }else if(temp<30){
        printf("normal temprature");
    }else if(temp<40){
        printf("it's hot");
    }else{
        printf("very hot");
    }
    return 0;
 }