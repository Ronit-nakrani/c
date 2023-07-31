#include <stdio.h>
#include <string.h>
int main()
{
    // multiplication ma first value wrong
    int ch[3][3], ch1[3][3], mul[3][3];
    int i, j, k;
    // first matrix
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the element[%d][%d] :", i, j);
            scanf("%d", &ch[i][j]);
        }
        printf("");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", ch[i][j]);
        }
        printf("\n");
    }
    
    //second matrix
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the element[%d][%d] :", i, j);
            scanf("%d", &ch1[i][j]);
        }
        printf("");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", ch1[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    //printing multiplication

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                mul[i][j] += ch[i][k] * ch1[k][j];
            }
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}