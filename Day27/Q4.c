//write a program to create marksheet generation system
#include <stdio.h>
int main()
{
    int roll[10], n, i;
    char name[10][20];
    float english[10], maths[10], science[10];
    float total[10], percentage[10];
    printf("Enter number of students: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("Student %d\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);
        printf("Enter Name: ");
        scanf("%s", name[i]);
        printf("Enter English Marks: ");
        scanf("%f", &english[i]);
        printf("Enter Maths Marks: ");
        scanf("%f", &maths[i]);
        printf("Enter Science Marks: ");
        scanf("%f", &science[i]);
        total[i] = english[i] + maths[i] + science[i];
        percentage[i] = total[i] / 3;
    }
    printf(" MARKSHEET ");
    for(i = 0; i < n; i++)
    {
        printf("\nRoll Number : %d\n", roll[i]);
        printf("Name        : %s\n", name[i]);
        printf("English     : %.2f\n", english[i]);
        printf("Maths       : %.2f\n", maths[i]);
        printf("Science     : %.2f\n", science[i]);
        printf("Total       : %.2f\n", total[i]);
        printf("Percentage  : %.2f%%\n", percentage[i]);
        if(percentage[i] >= 90)
            printf("Grade       : A+\n");
        else if(percentage[i] >= 75)
            printf("Grade       : A\n");
        else if(percentage[i] >= 60)
            printf("Grade       : B\n");
        else if(percentage[i] >= 40)
            printf("Grade       : C\n");
        else
            printf("Grade       : Fail\n");
    }
    return 0;
}