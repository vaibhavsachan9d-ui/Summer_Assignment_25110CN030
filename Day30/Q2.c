//write a program to create mini library system
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the number of books: ");
    scanf("%d", &n);
    int bookID[n];
    char title[n][50];
    char author[n][50];
    printf("Enter Book Details\n");
    for(i = 0; i < n; i++)
    {
        printf("Book %d\n", i + 1);
        printf("Enter Book ID: ");
        scanf("%d", &bookID[i]);
        printf("Enter Book Title: ");
        scanf(" %[^\n]", title[i]);
        printf("Enter Author Name: ");
        scanf(" %[^\n]", author[i]);
    }
    printf(" LIBRARY RECORDS \n");
    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book ID : %d\n", bookID[i]);
        printf("Title   : %s\n", title[i]);
        printf("Author  : %s\n", author[i]);
    }
    return 0;
}