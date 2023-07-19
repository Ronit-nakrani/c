 #include <stdio.h>

 int main() {
    
    int a;
    printf("enter the month in numberic\n");
    scanf("%d",&a);

    switch(a){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("month have 31 days");
        break;

        case 2:
        printf("month have a 29 days\n");
        printf("in leap year month have 28 days\n");
        break;

        case 4:
        case 6:
        case 9:
        case 11:
        printf("month have 30 days");
        break;

        default:
        printf("enter the valid number");
        break;
    }
   return 0;
 }