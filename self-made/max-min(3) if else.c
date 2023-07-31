 #include <stdio.h>

 int main() {

    float a,b,c;
    printf("enter the value of a");
    printf("enter the value of b");
    printf("enter the value of c");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c){
        printf("%f is maximum value",a);
    }else if (b>a && b>c){
        printf("%f is maximum value",b);
    }else if(c>a && c>b){
        printf("%f is maximum value",c);
    }else if(a<b && a<c){
        printf("%f is minimum value",a);
    }else if(b<a && b<c){
        printf("%f is minimum value",b);
    }else if(c<a && b<a){
        printf("%f is minimum value",c);
    }else if(a>b && b=c){
        printf("%f is maximum value",a);
        printf("%f is minimum value",b);
    }else if(b>a && a=c){
        printf("%f is maximum value",b);
        printf("%f is minimum value"a);
    }else if(c>a && a=b){
        printf("%f is maximum value",c);
        printf("%f is minimum value",a);
    }else {
        printf("a,b and c are same value");
    }
    return 0;
    
 }