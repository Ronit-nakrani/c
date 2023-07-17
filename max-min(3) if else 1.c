#include <stdio.h>

int main(){

    float a,b,c;
    printf("enter the first value a = \n");
    scanf("%f",&a);

    printf("enter the second value b = \n");
    scanf("%f",&b);

    printf("enter the third value c = \n");
    scanf("%f",&c);

      if(a>b && a>c){
        printf("%f is maximum numer\n",a);
    } if(b>a && b>c){
        printf("%f is maximum number\n",b);
    } if(c>a && c>b){ 
        printf("%f is maximum number\n",c);
    }
    
     if(a<b && a<c){
        printf("%f is minimum number\n",a);
    } if(b<a && b<c){
        printf("%f is minimum number\n",b);
    } if(c<a && c<b){
        printf("%f is minimum number\n",c);
    }
    
     if(a>b && b==c) {
        printf("%f is minimum number\n",b);
    } if(b>a && a==c){
        printf("%f is minimum number\n",c);
    } if(c>a && a==b){
        printf("%f is minimum number\n",a);
    }
    
     if(a<b && b==c){
        printf("%f is maximum number\n",c);
    } if(b<a && a==c){
        printf("%f is maximum number\n",a);
    } if(c<a && a==b){
        printf("%f is maximum number\n",b);
    }
      
      if(a==b && b==c){
        printf("%f all are equal");
      }
    return 0;
    
    }