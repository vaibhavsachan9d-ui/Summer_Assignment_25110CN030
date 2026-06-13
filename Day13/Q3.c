//write a program to find largest and smallest element in array
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter length of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    int smallest=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(smallest>arr[i]){
            smallest=arr[i];
        }
    }
    printf("largest elements is %d", largest);
    printf("smallest element is %d", smallest);
    return 0;
}