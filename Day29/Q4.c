//write a program to create a inventory management system
#include <stdio.h>
int main()
{
    int choice, i, n = 0;
    int id[50], quantity[50];
    float price[50];
    char name[50][30];
    do
    {
        printf(" INVENTORY MANAGEMENT SYSTEM \n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Update Quantity\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter Item ID: ");
                scanf("%d", &id[n]);
                printf("Enter Item Name: ");
                scanf("%s", name[n]);
                printf("Enter Quantity: ");
                scanf("%d", &quantity[n]);
                printf("Enter Price: ");
                scanf("%f", &price[n]);
                n++;
                printf("Item added successfully!");
                break;
            case 2:
                if(n == 0)
                {
                    printf("Inventory is empty.");
                }
                else
                {
                    printf("\nID\tName\tQuantity\tPrice\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("%d\t%s\t%d\t\t%.2f\n",
                        id[i], name[i], quantity[i], price[i]);
                    }
                }
                break;
            case 3:
            {
                int search, found = 0;
                printf("Enter Item ID to search: ");
                scanf("%d", &search);
                for(i = 0; i < n; i++)
                {
                    if(id[i] == search)
                    {
                        printf("Item Found!\n");
                        printf("Name: %s\n", name[i]);
                        printf("Quantity: %d\n", quantity[i]);
                        printf("Price: %.2f\n", price[i]);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Item not found.");
                break;
            }
            case 4:
            {
                int update, found = 0;
                printf("Enter Item ID to update quantity: ");
                scanf("%d", &update);
                for(i = 0; i < n; i++)
                {
                    if(id[i] == update)
                    {
                        printf("Enter new quantity: ");
                        scanf("%d", &quantity[i]);
                        printf("Quantity updated successfully!");
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Item not found.");
                break;
            }
            case 5:
                printf("Exiting Inventory System...");
                break;
            default:
                printf("Invalid Choice!");
        }

    } while(choice != 5);
    return 0;
}