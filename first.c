#include <stdio.h>

int main()
{
    int a, b, c, d;
    float percentage;
    char name[40];
    printf("Input the Roll Number of the student: ");
    scanf("%d", &a);
    printf("Input the Name of the Student : ");
    scanf("%s", &name);
    printf("Input the marks of Physics, Chemistry and Computer Application : ");
    scanf("%d %d %d", &b, &c, &d);

    if(a>100 || b>100 || c>100){
        printf("please enter the possible number\n");
    }else{
        printf("roll no : %d\n", a);
        printf("name of student is : %s\n", name);
        printf("marks in physics : %d\n", b);
        printf("marks in chemistry : %d\n", c);
        printf("marks in computer application : %d\n", d);
        int sum = b + c + d;
        printf("the total = %d\n", sum);
        percentage = sum / 3;
        printf("percentage = %0.2f\n", percentage);
           if(percentage>70){
            printf("class = first");
          }else if(percentage<35){
            printf("sorry you are failed");
          }else{
            printf("class = second");
          }
    }

    return 0;
}