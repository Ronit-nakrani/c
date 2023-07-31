#include <stdio.h>

int main() {

    char name;
    int balls,runs,four,six;
    
    printf("enter the player name \n");
    scanf("%c",&name);

    printf("enter the balls player faced\n");
    scanf("%d",&balls);

    printf("enter the runs that player scored\n");
    scanf("%d",&runs);

    printf("enter the fours that player hits\n");
    scanf("%d",&four);

    printf("enter the sixs that player hits\n");
    scanf("%d",&six);

    double strikerate = runs/balls*100;
    printf("strike rate of batsman is %lf\n",runs/balls*100);
    
    return 0;
}