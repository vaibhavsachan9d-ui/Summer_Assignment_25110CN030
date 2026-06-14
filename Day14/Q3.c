//write a program to find second largest element
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter length of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    int secondlargest=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargest && arr[i]!=largest){
            secondlargest=arr[i];
        }
    }
    printf("Second largest element is %d",secondlargest);
    return 0;
}