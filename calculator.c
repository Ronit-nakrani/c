#include <stdio.h>
void add(int sum)
{
    printf("The sum of a & b is = %d \n", sum);
}
void dif(int diff)
{
    printf("The diffrence of a & b is = %d\n", diff);
}
void mul(int mult)
{
    printf("the multiplication of a & b is %d\n", mult);
}
void divi(float div)
{
    printf("the division of the a & b is %f\n", divi);
}



//division ma value wrong print 
int main()
{
    int a, b,sum, diff, mult;
    float div;
    char opr[1], exit;
    for (;;)
    {
    jump:
        printf("Enter the first value : ");
        scanf("%d", &a);
        printf("Enter the second value : ");
        scanf("%d", &b);
        sum = a + b;
        diff = a - b;
        mult = a * b;
        div = a / b;
        printf("Indicate the sign of what you want between the two values above :");
        scanf("%s", &opr[1]);

        if (opr[1] == '+')
        {
            add(sum);
            printf("If you want to continue press 'c' or if you want to exit press 'e'\n");
            scanf("%s", &exit);
            switch (exit)
            {
            case 'c':
                printf("you said that you want to continue \n");
                goto jump;
            case 'e':
                printf("you have exited this code \n");
                break;
            default:
                printf("error");
                break;
            }
        }
        else if (opr[1] == '-')
        {
            dif(diff);
            printf("If you want to continue press 'c' or if you want to exit press 'e'\n");
            scanf("%s", &exit);
            switch (exit)
            {
            case 'c':
                printf("you said that you want to continue \n");
                goto jump;
            case 'e':
                printf("you have exited this code \n");
                break;
            }
        }
        else if (opr[1] == '*')
        {
            mul(mult);
            printf("If you want to continue press 'c' or if you want to exit press 'e'\n");
            scanf("%s", &exit);
            switch (exit)
            {
            case 'c':
                printf("you said that you want to continue \n");
                goto jump;
            case 'e':
                printf("you have exited this code \n");
                break;
            }
        }
        else if (opr[1] == '/')
        {
            divi(div);
            printf("If you want to continue press 'c' or if you want to exit press 'e'\n");
            scanf("%s", &exit);
            switch (exit)
            {
            case 'c':
                printf("you said that you want to continue \n");
                goto jump;
            case 'e':
                printf("you have exited this code \n");
                break;
            }
        }
    
    
    
    
    
    
    
    }
    return 0;
}