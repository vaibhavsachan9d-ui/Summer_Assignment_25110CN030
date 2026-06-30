//write a program to create mini project using array, string and function
#include <stdio.h>
int accNo[10];
char name[10][20];
float balance[10];
int count = 0;
void createAccount();
void deposit();
void withdraw();
void display();
int main()
{
    int choice;
    while(1)
    {
        printf(" BANK ACCOUNT SYSTEM \n");
        printf("1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Display Accounts\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if(choice == 1)
            createAccount();
        else if(choice == 2)
            deposit();
        else if(choice == 3)
            withdraw();
        else if(choice == 4)
            display();
        else if(choice == 5)
            break;
        else
            printf("Invalid Choice!");
    }
    return 0;
}
void createAccount()
{
    printf("Enter Account Number: ");
    scanf("%d", &accNo[count]);
    printf("Enter Name: ");
    scanf("%s", name[count]);
    printf("Enter Balance: ");
    scanf("%f", &balance[count]);
    count++;
    printf("Account Created Successfully!");
}
void deposit()
{
    int number, i;
    float amount;
    printf("Enter Account Number: ");
    scanf("%d", &number);
    for(i = 0; i < count; i++)
    {
        if(accNo[i] == number)
        {
            printf("Enter Deposit Amount: ");
            scanf("%f", &amount);
            balance[i] = balance[i] + amount;
            printf("Money Deposited!");
            return;
        }
    }
    printf("Account Not Found!");
}
void withdraw()
{
    int number, i;
    float amount;
    printf("Enter Account Number: ");
    scanf("%d", &number);
    for(i = 0; i < count; i++)
    {
        if(accNo[i] == number)
        {
            printf("Enter Withdraw Amount: ");
            scanf("%f", &amount);
            if(amount <= balance[i])
            {
                balance[i] = balance[i] - amount;
                printf("Money Withdrawn!");
            }
            else
            {
                printf("Insufficient Balance!");
            }
            return;
        }
    }
    printf("Account Not Found!");
}
void display()
{
    int i;
    printf("Account Details\n");
    for(i = 0; i < count; i++)
    {
        printf("\nAccount Number: %d", accNo[i]);
        printf("\nName: %s", name[i]);
        printf("\nBalance: %.2f\n", balance[i]);
    }
}