//write a program to create contact management system
#include <stdio.h>
#include<string.h>
int main()
{
    int n = 0, i, choice, search, found;
    long long phone[10];
    char name[10][30], email[10][40];
    do
    {
        printf(" Contact Management System \n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf(" Add Contact \n");
            printf("Enter Name: ");
            scanf("%s", name[n]);
            printf("Enter Phone Number: ");
            scanf("%lld", &phone[n]);
            printf("Enter Email: ");
            scanf("%s", email[n]);
            n++;
            printf("Contact Added Successfully!\n");
        }
        else if (choice == 2)
        {
            printf("\n--- All Contacts ---\n");
            printf("Name\tPhone\t\tEmail\n");
            for(i = 0; i < n; i++)
            {
                printf("%s\t%lld\t%s\n", name[i], phone[i], email[i]);
            }
        }
        else if (choice == 3)
        {
            printf("Enter Name to Search: ");
            scanf("%s", name[9]);
            found = 0;
            for(i = 0; i < n; i++)
            {
                if(strcmp(name[i], name[9]) == 0)
                {
                    printf("Contact Found!\n");
                    printf("Name  : %s\n", name[i]);
                    printf("Phone : %lld\n", phone[i]);
                    printf("Email : %s\n", email[i]);
                    found = 1;
                    break;
                }
            }
            if(found == 0)
            {
                printf("Contact Not Found!");
            }
        }
        else if (choice != 4)
        {
            printf("Invalid Choice!");
        }
    } while(choice != 4);
    printf("Thank You for Using Contact System!");
    return 0;
}