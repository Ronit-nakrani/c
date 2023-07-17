#include <Stdio.h>
int main() {

    char option;
    float km,miles,inch,feet,cm,kilogram,pound,meter;
    printf("select the options from belove what you want to do");
    printf("\nA) km to miles\nB) inches to foot\nC) cms to inches\nD) pound to kgs\nE) inches to meters\n");
    scanf("%c",&option);

    if(option == 'A'){
        printf("enter the km :- ");
        scanf("%f",&km);
        miles=km*0.6214;
        printf("%f km = %f miles",km,miles);
    }if(option == 'B'){
        printf("enter the inch :- ");
        scanf("%f",&inch);
        feet=inch*0.0833;
        printf("%f inch = %f feet",inch,feet);
    }if(option == 'C'){
        printf("enter the cm :- ");
        scanf("%f",&cm);
        inch=cm*0.3937;
        printf("%f cm = %f inch",cm,inch);
    }if(option == 'D'){
        printf("enter the pound :- ");
        scanf("%f",&pound);
        kilogram=pound*0.4535;
        printf("%f pound = %f kilograms",pound,kilogram);        
    }if(option == 'E'){
        printf("enter the inch :- ");
        scanf("%f",&inch);
        meter=inch*0.0254;
        printf("%f inch = %f meter",inch,meter);
    }

     return 0;
}