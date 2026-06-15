//write a program to reverse array
#include<stdio.h>
int main()
{
    int i,n,temp;
    printf("Enter length of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    printf("Reversed array is :\n");
    for(i=0;i<n;i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}