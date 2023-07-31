 #include <stdio.h>

 int main() {

    int i;
    
    for(i=1;i<11;i++){
        if(i%2==0){
            printf("number %d is even\n",i);
        }else{
            printf("number %d is odd\n",i);
        }
    }
    return 0;
 }
 