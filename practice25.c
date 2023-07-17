 #include<stdio.h>

 int main() {

    int choice,r,l,b,h;
    printf("input 1 for aera of circle\n");
    printf("input 2 for aera of square\n");
    printf("input 3 for aera of triangle\n");
    scanf("%d",&choice);
    float aera;

    switch(choice){

        case 1:
        printf("enter the value of r\n");
        scanf("%d",&r);
        printf("aera = %f ",3.14*r*r);
        break;

        case 2:
        printf("enter the value of l\n");
        scanf("%f",&l);
        printf("enter the value of b\n");
        scanf("%f",&b);
        printf("aera = %d",2*l*b);
        break;

        case 3:
        printf("enter the value of b\n");
        scanf("%f",&b);
        printf("enter the value of h\n");
        scanf("%f",&h);
        printf("aera = %f ",0.5*b*h);
        break;

        default :
        printf("enter the valid number \n");
        break;
    }        
    return 0;
 }