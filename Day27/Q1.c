//write a program to create a student management system
#include <stdio.h>
int main() 
{
    int roll[10], n, search, i;
    char name[10][20];
    float marks[10];
    printf("Enter number of students: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) 
    {
        printf("Student %d\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);
        printf("Enter Name: ");
        scanf("%s", name[i]);
        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }
    printf(" Student Records \n");
    printf("Roll\tName\tMarks\n");
    for(i = 0; i < n; i++) 
    {
        printf("%d\t%s\t%.2f\n", roll[i], name[i], marks[i]);
    }
    printf("Enter Roll Number to search: ");
    scanf("%d", &search);
    for(i = 0; i < n; i++) {
        if(roll[i] == search) {
            printf("Student Found!\n");
            printf("Roll Number: %d\t", roll[i]);
            printf("Name: %s\t", name[i]);
            printf("Marks: %.2f\t", marks[i]);
            break;
        }
    }
    if(i == n) 
    {
        printf("Student not found.");
    }
    return 0;
}