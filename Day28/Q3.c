//write a program to create ticket booking system
#include <stdio.h>
int main()
{
    int seat[10], n = 0, i, choice, search, found;
    char name[10][30], movie[10][30];
    int tickets[10];
    float price[10], total;
    do
    {
        printf(" Ticket Booking System \n");
        printf("1. Book Ticket\n");
        printf("2. View Bookings\n");
        printf("3. Search Booking\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf(" Book Ticket \n");
            printf("Enter Seat Number: ");
            scanf("%d", &seat[n]);
            printf("Enter Customer Name: ");
            scanf("%s", name[n]);
            printf("Enter Movie Name: ");
            scanf("%s", movie[n]);
            printf("Enter Number of Tickets: ");
            scanf("%d", &tickets[n]);
            printf("Enter Price per Ticket: ");
            scanf("%f", &price[n]);
            total = tickets[n] * price[n];
            printf("Total Bill: %.2f\n", total);
            n++;
            printf("Ticket Booked Successfully!\n");
        }
        else if (choice == 2)
        {
            printf(" All Bookings \n");
            printf("Seat\tName\tMovie\tTickets\tPrice\n");
            for(i = 0; i < n; i++)
            {
                printf("%d\t%s\t%s\t%d\t%.2f\n",
                       seat[i], name[i], movie[i], tickets[i], price[i]);
            }
        }
        else if (choice == 3)
        {
            printf("Enter Seat Number to Search: ");
            scanf("%d", &search);
            found = 0;
            for(i = 0; i < n; i++)
            {
                if(seat[i] == search)
                {
                    printf("\nBooking Found!\n");
                    printf("Seat Number : %d\n", seat[i]);
                    printf("Name        : %s\n", name[i]);
                    printf("Movie       : %s\n", movie[i]);
                    printf("Tickets     : %d\n", tickets[i]);
                    printf("Price       : %.2f\n", price[i]);
                    found = 1;
                    break;
                }
            }
            if(found == 0)
            {
                printf("Booking Not Found!");
            }
        }
        else if (choice != 4)
        {
            printf("Invalid Choice!");
        }
    } 
    while(choice != 4);
    printf("Thank You for Using Ticket Booking System!");
    return 0;
}