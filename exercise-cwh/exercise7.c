#include <stdio.h>
#include <string.h>

struct driver
{
    char name[50];
    int license;
    char route[50];
    int kms;
};

int main()
{
    int n,i;
    printf("enter the number of drivers : ");
    scanf("%d",&n);
    struct driver d[n];
    for(i=1;i<=n;i++){
        printf("Enter driver name :");
        scanf("%s",&d[i].name);
        printf("Enter your driving lincense :");
        scanf("%d",&d[i].license);
        printf("Enter the route you driving :");
        scanf("%s",&d[i].route);
        printf("Enter the kms you drive (apporxmatly) :");
        scanf("%d",&d[i].kms);
    }
    for(i=1;i<=n;i++){
        printf("-----------------------------------------------------------------------------------------------------\n");
        printf("| DRIVER DETAILS\n");
        printf("-----------------------------------------------------------------------------------------------------\n");
        printf("| Name : %s\n",d[i].name);
        printf("-----------------------------------------------------------------------------------------------------\n");
        printf("| Lincense : %d\n",d[i].license);
        printf("-----------------------------------------------------------------------------------------------------\n");
        printf("| Route : %s\n",d[i].route);
        printf("-----------------------------------------------------------------------------------------------------\n");
        printf("| KMs : %d\n",d[i].kms);
        printf("-----------------------------------------------------------------------------------------------------\n");
        printf("\n");
    }
    return 0; 
}