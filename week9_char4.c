#include <stdio.h>
#include <string.h>
int main()
{
    char ch[3][3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter the value of element[%d][%d] :",i,j);
            scanf("%s", &ch[i][j]);
        }
        printf("");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", ch[i][j]);
            
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", ch[i][j]);
        }
        printf("\n");
    }

    return 0;
}