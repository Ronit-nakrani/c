#include <stdio.h>

int main() {

    char name;
    printf("enter the character \n");
    scanf("%c",&name);
     
     if(name=='a' || name=='e' || name=='i' || name=='o' || name=='u'){
        printf("%c is the vowel character",name);
     }else{
        printf("%c is constant character",name);
     }
    return 0;
}
