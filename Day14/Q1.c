//write a program to do linear search
#include<stdio.h>
int main()
{
    int n,key,i,found=0;
    printf("Enter length of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arr[i]==key){
            printf("Element found at index %d\n",i);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("Element not found");
    }
    return 0;
}