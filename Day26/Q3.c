//write a program to create ATM simulation
#include <stdio.h>
int main() {
    int choice;
    float balance = 1000.0, amount;
    do {
        printf("ATM MENU\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Current Balance: Rs. %.2f\n", balance);
        }
        else if (choice == 2) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            balance = balance + amount;
            printf("Deposit successful!\n");
            printf("New Balance: Rs. %.2f\n", balance);
        }
        else if (choice == 3) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount <= balance) {
                balance = balance - amount;
                printf("Withdrawal successful!\n");
                printf("Remaining Balance: Rs. %.2f\n", balance);
            } else {
                printf("Insufficient balance!\n");
            }
        }
        else if (choice == 4) {
            printf("Thank you for using the ATM.\n");
        }
        else {
            printf("Invalid choice! Please try again.\n");
        }
    } 
    while (choice != 4);
    return 0;
}