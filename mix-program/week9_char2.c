#include <stdio.h>
int main()
{

    char name;
    for (;;)
    {
        printf("enter the character :");
        scanf("%s", &name);
        printf("%c\n", name - 32);
    }

    return 0;
}