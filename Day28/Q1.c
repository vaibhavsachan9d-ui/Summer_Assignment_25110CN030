//write a program to create library management systems
#include <stdio.h>
int main()
{
    int id[10], n, search, i;
    char book[10][30];
    char author[10][30];
    printf("Enter number of books: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Enter Book ID: ");
        scanf("%d", &id[i]);
        printf("Enter Book Name: ");
        scanf("%s", book[i]);
        printf("Enter Author Name: ");
        scanf("%s", author[i]);
    }
    printf(" Library Records \n");
    printf("ID\tBook\tAuthor\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%s\n", id[i], book[i], author[i]);
    }
    printf("Enter Book ID to Search: ");
    scanf("%d", &search);
    for(i = 0; i < n; i++)
    {
        if(id[i] == search)
        {
            printf("\nBook Found!\n");
            printf("Book ID     : %d\n", id[i]);
            printf("Book Name   : %s\n", book[i]);
            printf("Author Name : %s\n", author[i]);
            break;
        }
    }
    if(i == n)
    {
        printf("Book Not Found!");
    }
    return 0;
}