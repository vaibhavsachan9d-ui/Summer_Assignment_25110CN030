//write a program to create bank account system
#include <stdio.h>
int main()
{
    int acc[10], n = 0, search, i, choice, found;
    char name[10][30];
    float balance[10], amount;
    do
    {
        printf(" Bank Account System \n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Search Account\n");
        printf("4. Deposit Money\n");
        printf("5. Withdraw Money\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf(" Create Account \n");
            printf("Enter Account Number: ");
            scanf("%d", &acc[n]);
            printf("Enter Account Holder Name: ");
            scanf("%s", name[n]);
            printf("Enter Initial Balance: ");
            scanf("%f", &balance[n]);
            n++;
            printf("Account Created Successfully!");
        }
        else if (choice == 2)
        {
            printf(" All Accounts \n");
            printf("AccNo\tName\tBalance\n");

            for(i = 0; i < n; i++)
            {
                printf("%d\t%s\t%.2f\n", acc[i], name[i], balance[i]);
            }
        }
        else if (choice == 3)
        {
            printf("Enter Account Number to Search: ");
            scanf("%d", &search);
            found = 0;
            for(i = 0; i < n; i++)
            {
                if(acc[i] == search)
                {
                    printf("\nAccount Found!\n");
                    printf("AccNo   : %d\n", acc[i]);
                    printf("Name    : %s\n", name[i]);
                    printf("Balance : %.2f\n", balance[i]);
                    found = 1;
                    break;
                }
            }
            if(found == 0)
            {
                printf("Account Not Found!");
            }
        }
        else if (choice == 4)
        {
            printf("Enter Account Number: ");
            scanf("%d", &search);
            found = 0;
            for(i = 0; i < n; i++)
            {
                if(acc[i] == search)
                {
                    printf("Enter amount to deposit: ");
                    scanf("%f", &amount);
                    balance[i] += amount;
                    printf("Amount Deposited Successfully!\n");
                    printf("New Balance: %.2f\n", balance[i]);
                    found = 1;
                    break;
                }
            }
            if(found == 0)
            {
                printf("Account Not Found!");
            }
        }
        else if (choice == 5)
        {
            printf("Enter Account Number: ");
            scanf("%d", &search);
            found = 0;
            for(i = 0; i < n; i++)
            {
                if(acc[i] == search)
                {
                    printf("Enter amount to withdraw: ");
                    scanf("%f", &amount);
                    if(amount <= balance[i])
                    {
                        balance[i] -= amount;
                        printf("Withdrawal Successful!\n");
                        printf("New Balance: %.2f\n", balance[i]);
                    }
                    else
                    {
                        printf("Insufficient Balance!");
                    }
                    found = 1;
                    break;
                }
            }
            if(found == 0)
            {
                printf("Account Not Found!");
            }
        }
        else if (choice != 6)
        {
            printf("Invalid Choice!");
        }
    } 
    while(choice != 6);
    printf("Thank You!");
    return 0;
}