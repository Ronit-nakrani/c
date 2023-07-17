#include <stdio.h>

int main() {

    char grade;
    printf("input the grade\n");
    scanf("%c",&grade);

    switch(grade){
        case 'e':
        printf("excellent\n");
        break;
        case 'v':
        printf("very good\n");
        break;
        case 'g':
        printf("good\n");
        break;
        case 'a':
        printf("avarage\n");
        break;
        case 'f':
        printf("fail\n");
        break;
        default:
        printf("this is not a true grade\n");
    }
    return 0;
}