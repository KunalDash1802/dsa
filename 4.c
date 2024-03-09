#include <stdio.h>
struct student 
{
    char Name[50];
    char gender[10];
    int roll;
    float marks1,marks2,marks3,marks4,marks5;
}
 s[5];
int main() 
{
    int i,n;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    printf("\nEnter information of students:\n");
    for (i = 0; i < n; ++i) 
    {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].Name);
        printf("Gender?-");
        scanf("%s",s[i].gender);
        printf("Enter marks of 1st subject: ");
        scanf("%f", &s[i].marks1);
        printf("Enter marks of 2nd subject: ");
        scanf("%f", &s[i].marks2);
        printf("Enter marks of 3rd subject: ");
        scanf("%f", &s[i].marks3);
        printf("Enter marks of 4th subject: ");
        scanf("%f", &s[i].marks4);
        printf("Enter marks of 5th subject: ");
        scanf("%f", &s[i].marks5);
    }
    if()
    printf("Displaying Information:\n\n");
    printf("***********\n");
    for (i = 0; i < n; ++i) 
    {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].Name);
        printf("Gender- ");
        puts(s[i].gender);
        printf("Marks 1: %.1f", s[i].marks1);
        printf("\n");
         printf("Marks 2: %.1f", s[i].marks2);
        printf("\n");
         printf("Marks 3: %.1f", s[i].marks3);
        printf("\n");
         printf("Marks 4: %.1f", s[i].marks4);
        printf("\n");
         printf("Marks 5: %.1f", s[i].marks5);
        printf("\n");
    }
    return 0;
}