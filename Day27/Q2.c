//write a programto create employee management system
#include <stdio.h>
int main()
{
    int id[10], n, search, i;
    char name[10][20];
    float salary[10];
    printf("Enter number of employees: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("Employee %d\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &id[i]);
        printf("Enter Employee Name: ");
        scanf("%s", name[i]);
        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }
    printf(" Employee Records ");
    printf("ID\tName\tSalary\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%.2f\n", id[i], name[i], salary[i]);
    }
    printf("Enter Employee ID to search: \n");
    scanf("%d", &search);
    for(i = 0; i < n; i++)
    {
        if(id[i] == search)
        {
            printf("Employee Found!\n");
            printf("Employee ID : %d\n", id[i]);
            printf("Name        : %s\n", name[i]);
            printf("Salary      : %.2f\n", salary[i]);
            break;
        }
    }
    if(i == n)
    {
        printf("Employee not found.");
    }
    return 0;
}