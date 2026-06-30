//write a program to create a student record system using strings and arrays
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int roll[n];
    int age[n];
    char name[n][50];
    printf("Enter Student Details\n");
    for(i = 0; i < n; i++)
    {
        printf("Student %d\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);
        printf("Enter Name: ");
        scanf(" %[^\n]", name[i]); 
        printf("Enter Age: ");
        scanf("%d", &age[i]);
    }
    printf(" STUDENT RECORDS \n");
    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", roll[i]);
        printf("Name        : %s\n", name[i]);
        printf("Age         : %d\n", age[i]);
    }
    return 0;
}