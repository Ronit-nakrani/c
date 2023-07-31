#include<stdio.h>
int main() {
    int n,i,row,col;
    char no[] = {} ;
    printf("how many character in the in your name:-");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("enter the character %d :- ",i);
        scanf("%s",&no[i]);
        
        //a
        if(no[i]=='a'){
            for(row=1;row<=5;row++){
                for(col=1;col<=5;col++){
                    if(row==1 || row==3 || col==1 || col==5){
                       printf("* ");
                    }else{
                       printf("  ");
                    }
                }
                printf("\n");
            }        
        }
        
        //b
        else if(no[i]=='b'){
            for(row=1;row<=5;row++){
                for(col=1;col<=5;col++){
                    if(row==1 || row==3 || row==5 || col==1 || col==5){
                       printf("* ");
                    }else{
                       printf("  ");
                    }
                }
                printf("\n");
            }
        }
        
        //c
        else if(no[i]=='c'){
            for(row=1;row<=5;row++){
                for(col=1;col<=5;col++){
                    if(row==1 || row==5 || col==1){
                        printf("* ");
                    }else{
                        printf("  ");
                    }
                }
                printf("\n");
            }
        }

        //d
        else if(no[i]=='d'){
            for(row=1;row<=5;row++){
                for(col=1;col<=5;col++){
                    if(row==1||row==5||col==2||col==5){
                        printf("* ");
                    }else{
                        printf("  ");
                    }
                }
                printf("\n");
            }
        }

        //e
        else if(no[i]=='e'){
            for(row=1;row<=5;row++){
                for(col=1;col<=5;col++){
                    if(row==1||row==3||row==5||col==1){
                        printf("* ");
                    }else{
                        printf("  ");
                    }
                }
                printf("\n");
            }
        }

        //f
        else if(no[i]=='f'){
            for(row=1;row<=5;row++){
                for(col=1;col<=5;col++){
                    if(row==1||row==3||col==1){
                        printf("* ");
                    }else{
                        printf("  ");
                    }
                }
                printf("\n");
            }
        }

        //g 
        else if(no[i]=='g'){
            for(row=1;row<=5;row++){
                for(col=1;col<=5;col++){
                    if(row==1||col==1||row==5||(col==5&&row>=3)||(row==3&&col>=3)){
                        printf("* ");
                    }else{
                        printf("  ");
                    }
                }
                printf("\n");
            }
        }

        //h 
        else if(no[i]=='h'){
            for(row=1;row<=5;row++){
                for(col=1;col<=5;col++){
                    if(col==1||row==3||col==5){
                        printf("* ");
                    }else{
                        printf("  ");
                    }
                }
                printf("\n");
            }
        }

        //i
        else if(no[i]=='i'){
            for(row=1;row<=5;row++){
                for(col=1;col<=5;col++){
                    if(row==1||col==3||row==5){
                        printf("* ");
                    }else{
                        printf("  ");
                    }
                }
                printf("\n");
            }
        }
        
        //j
        else if(no[i]=='j'){
            for(row=1;row<=5;row++){
                for(col=1;col<=5;col++){
                    if(row==1||(col==3&&row<5)||(row==5&&col<3)){
                        printf("* ");
                    }else{
                        printf("  ");
                    }
                }
                printf("\n");
            }
        }
        
        //k
        else if(no[i]=='k'){
            for(row=1;row<=5;row++){
                for(col=1;col<=5;col++){
                    if (col==1||(row<=3&&col+row==5)||(row>3&&col==row-1)){
                        printf("* ");
                    }else{  
                        printf("  ");
                    }
                }    
            printf("\n");
            }
        }

        //l
        else if(no[i]=='l'){
            for(row=1;row<=5;row++){
                for(col=1;col<=5;col++){
                    if(col==1||row==5){
                        printf("* ");
                    }else{
                        printf("  ");
                    }
                }
            printf("\n");
            }
        }

        //m
        else if(no[i]=='m'){
            for(row=1;row<=5;row++){
                for(col=1;col<=5;col++){
                    if(col==1||col==5||(row<=3&&(row==col||col==6-row))){
                        printf("* ");
                    }else{
                        printf("  ");
                    }
                } 
            printf("\n");
            }
        }

        //n
        else if(no[i]=='n'){
            for(row=1;row<=5;row++){
                for(col=1;col<=5;col++){
                    if(col==1||col==5||(row<=5&&row==col)){
                        printf("* ");
                    }else{
                        printf("  ");
                    }
                }
            printf("\n");
            }
        }

        //o
        else if(no[i]=='o'){
            for(row=1;row<=5;row++){
                for(col=1;col<=5;col++){
                    if(row==1||row==5||col==1||col==5){
                        printf("* ");
                    }else{
                        printf("  ");
                    }
                }
            printf("\n");    
            }
        }

        //p
        else if(no[i]=='p'){
            for(row=1;row<=5;row++){
                for(col=1;col<=5;col++){
                    if(col==1||row==1||row==3||(col==5&&row<=3)){
                        printf("* ");
                    }else{
                        printf("  ");
                    }
                }
            printf("\n");
            }
        }

        //q 
        else if(no[i]=='q'){
            for(row=1;row<=5;row++){
                for(col=1;col<=5;col++){
                    if(col<5&&(row==1||row==4)||row<5&&(col==1||col==4)||(col>=3&&row==col)){
                        printf("* ");
                    }else{
                        printf("  ");
                    }
                }
            printf("\n");    
            }
        }

        //r (editing)
        else if(no[i]=='r'){
            for(row=1;row<=6;row++){
                for(col=1;col<=6;col++){
                    if(col==1||(row==1&&col<=4)||(row==3&&col<=4)||(col==4&&row<=3)||(row>=3&&col==row-2)){
                        printf("* ");
                    }else{
                        printf("  ");
                    }
                }
            printf("\n");    
            }
        }

        //s
        else if(no[i]=='s'){
            for(row=1;row<=5;row++){
                for(col=1;col<=5;col++){
                    if(row==1||row==3||row==5||(col==1&&row<=3)||(col==5&&row>=3)){
                        printf("* ");
                    }else{
                        printf("  ");
                    }
                }
            printf("\n");    
            }
        }

        //t
        else if(no[i]=='t'){
            for(row=1;row<=5;row++){
                for(col=1;col<=5;col++){
                    if(row==1||col==3){
                        printf("* ");
                    }else{
                        printf("  ");
                    }
                }
            printf("\n");    
            }
        }

        //u 
        else if(no[i]=='u'){
            for(row=1;row<=5;row++){
                for(col=1;col<=5;col++){
                    if(row<5&&(col==1||col==5)||(row==5&&(col<5&&col>1))){
                        printf("* ");
                    }else{
                        printf("  ");
                    }
                }
            printf("\n");    
            }
        }

        //v
        else if(no[i]=='v'){
            for(row=1;row<=5;row++){
                for(col=1;col<=5;col++){
                    if(row<=3&&(col==1||col==5)||(col>=2&&row==col+2)||(col==4&&row==col)){
                        printf("* ");
                    }else{
                        printf("  ");
                    }
                }
            printf("\n");
            }
        }

        //w
        else if(no[i]=='w'){
            for(row=1;row<=5;row++){
                for(col=1;col<=5;col++){
                    if(col==1||col==5||row>=3&&(row==col||row==6-col)){
                        printf("* ");
                    }else{
                        printf("  ");
                    }
                }
            printf("\n");
            }
        }

        //x
        else if(no[i]=='x'){
            for(row=1;row<=5;row++){
                for(col=1;col<=5;col++){
                    if((row<=5&&row==col)||(row+col==6&&(row>=3||col>3))){
                        printf("* ");
                    }else{
                        printf("  ");
                    }
                }
            printf("\n");    
            }
        }

        //y
        else if(no[i]=='y'){
            for(row=1;row<=5;row++){
                for(col=1;col<=5;col++){
                    if((row<=3&&row==col)||(row<=1&&col<=row)||(row+col==6&&col>3)||(row>3&&col==3)){
                        printf("* ");
                    }else{
                        printf("  ");
                    }
                }
            printf("\n");    
            }
        }

        //z
        else if(no[i]=='z'){
            for(row=1;row<=5;row++){
                for(col=1;col<=5;col++){
                    if(row==1||row==5||(row+col==6&&(row>=3||col>3))){
                        printf("* ");
                    }else{
                        printf("  ");
                    }
                }
            printf("\n");    
            }
        }

        else{
            printf("error :");
        }
    }
    for(i=1;i<=n;i++){
        printf("%s ",no[i]);
    }

    return 0;
}  