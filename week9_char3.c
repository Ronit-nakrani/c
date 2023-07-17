#include <stdio.h>
int main()
{

    
    char ch[10];
    for(;;)
    {
        printf("enter the character : ");
        scanf("%s", &ch[10]);
        printf("The ASCII value of %c is = %d\n", ch[10], ch[10]);
        printf("\n");
    }

    return 0;
}