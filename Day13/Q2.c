//write a program to calculate sum and average of array
#include<stdio.h>
int main()
{
    int n,i;
    float sum=0,avg;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg=sum/n;
    printf("Sum is %2f",sum);
    printf("Average is %2f",avg);
    return 0;
}