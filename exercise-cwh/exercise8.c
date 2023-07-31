#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomvalue() {
    srand(time(NULL));
    return rand()%3;
}
void select(int play,int j) {
    if(j==1){
        printf("player %d : rock\n",play);
    }else if(j==2) {
        printf("player %d : paper\n",play);
    }else if (j==3){
        printf("player %d : scissors\n",play);
    }else{
        printf("");
    }
}


int main() {
    int i,j;
    for(i=1;i<=3;i++){
    printf("select one option from belove\n1) rock\n2) paper\n3) scissors\n");
    scanf("%d",&j);
    select(1,j);
    int value = randomvalue()%3;
    select(2,value);
    
    }
    
    return 0;
}