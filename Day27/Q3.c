//write a program to create salary management system
#include <stdio.h>
int main()
{
    int id[10], n, i;
    char name[10][20];
    float basic[10], bonus[10], total[10];
    printf("Enter number of employees: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("Employee %d\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &id[i]);
        printf("Enter Employee Name: ");
        scanf("%s", name[i]);
        printf("Enter Basic Salary: ");
        scanf("%f", &basic[i]);
        bonus[i] = basic[i] * 0.10;   
        total[i] = basic[i] + bonus[i];  
    }
    printf(" Salary Report\n ");
    printf("ID\tName\tBasic\tBonus\tTotal\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%.2f\t%.2f\t%.2f\n",
               id[i], name[i], basic[i],bonus[i], total[i]);
    }
    return 0;
}