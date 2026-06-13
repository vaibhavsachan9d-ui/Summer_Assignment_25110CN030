//write a program to input and display array
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements\n:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}