#include <stdio.h>
int main()
{

    int i, k, n;
    printf("how many students in the list you want to add : ");
    scanf("%d", &n);
    int std[n];
    char name[n][50], sub[n][10];
    float result[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the student %d name : ", i + 1);
        scanf("%s", &name[i][50]);
        printf("Which standard %s is passed : ", &name[i][50]);
        scanf("%d", &std[i]);
        printf("Enter the percentage %s get in %d standard : ", &name[i][50], std[i]);
        scanf("%f", &result[i]);
        printf("Which subject is %s's favourite : ", &name[i][50]);
        scanf("%s", &sub[i][10]);
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        printf("%s's detail \n", &name[i][50]);
        printf("Student name : %s\n", &name[i][50]);
        printf("Favourite subject : %s\n", &sub[i][10]);
        printf("Standard : %d\n", std[i]);
        printf("Percentage : %f\n", result[i]);
        printf("\n");
    }
        /*
        char com1[50], com2[50];
        printf("Comparision between two student \n");
        printf("enter the student 1 name:");
        scanf("%s", &com1[50]);
        printf("enter the student 2 name:");
        scanf("%s", &com2[50]);
        printf("");
        */

    return 0;
}