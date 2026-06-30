//write a program to create mini employee management system
#include <stdio.h>
int main()
{
    int id[10], age[10], salary[10];
    char name[10][20];
    int n = 0, choice, i, search;
    int run = 1;
    while (run == 1)
    {
        printf(" Employee Management System \n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("Enter Employee ID: ");
            scanf("%d", &id[n]);
            printf("Enter Employee Name: ");
            scanf("%s", name[n]);
            printf("Enter Age: ");
            scanf("%d", &age[n]);
            printf("Enter Salary: ");
            scanf("%d", &salary[n]);
            n++;
            printf("Employee Added Successfully!");
        }
        else if (choice == 2)
        {
            if (n == 0)
            {
                printf("No employee records found.");
                continue;
            }
            printf("\nID\tName\tAge\tSalary\n");
            for (i = 0; i < n; i++)
            {
                printf("%d\t%s\t%d\t%d\n", id[i], name[i], age[i], salary[i]);
            }
        }
        else if (choice == 3)
        {
            printf("Enter Employee ID to Search: ");
            scanf("%d", &search);
            for (i = 0; i < n; i++)
            {
                if (id[i] == search)
                {
                    printf("\nEmployee Found\n");
                    printf("ID: %d\n", id[i]);
                    printf("Name: %s\n", name[i]);
                    printf("Age: %d\n", age[i]);
                    printf("Salary: %d\n", salary[i]);
                    break;
                }
            }
            if (i == n)
            {
                printf("Employee Not Found!");
            }
        }
        else if (choice == 4)
        {
            printf("Thank You!");
            run = 0;
        }
        else
        {
            printf("Invalid Choice!");
        }
    }
    return 0;
}