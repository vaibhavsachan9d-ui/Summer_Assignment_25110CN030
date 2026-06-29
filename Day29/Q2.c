//write a program to create menu driven array operation system
#include <stdio.h>
int main()
{
    int a[10], n, i, choice, sum = 0;
    printf(" MENU DRIVEN ARRAY OPERATIONS \n");
    printf("1. Enter Elements\n");
    printf("2. Display Elements\n");
    printf("3. Find Sum of Elements\n");
    printf("4. Find Largest Element\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf("Enter the number of elements: ");
            scanf("%d", &n);
            printf("Enter %d elements:", n);
            for(i = 0; i < n; i++)
            {
                scanf("%d", &a[i]);
            }
            printf("Elements entered successfully.");
            break;
        case 2:
            printf("Enter the number of elements: ");
            scanf("%d", &n);
            printf("Enter %d elements:\n", n);
            for(i = 0; i < n; i++)
            {
                scanf("%d", &a[i]);
            }
            printf("Array Elements are:\n");
            for(i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            break;
        case 3:
            printf("Enter the number of elements: ");
            scanf("%d", &n);
            printf("Enter %d elements:\n", n);
            for(i = 0; i < n; i++)
            {
                scanf("%d", &a[i]);
                sum = sum + a[i];
            }
            printf("Sum = %d\n", sum);
            break;
        case 4:
        {
            int largest;
            printf("Enter the number of elements: ");
            scanf("%d", &n);
            printf("Enter %d elements:", n);
            for(i = 0; i < n; i++)
            {
                scanf("%d", &a[i]);
            }
            largest = a[0];
            for(i = 1; i < n; i++)
            {
                if(a[i] > largest)
                    largest = a[i];
            }
            printf("Largest Element = %d\n", largest);
            break;
        }
        case 5:
            printf("Exiting Program...");
            break;

        default:
            printf("Invalid Choice!");
    }
    return 0;
}