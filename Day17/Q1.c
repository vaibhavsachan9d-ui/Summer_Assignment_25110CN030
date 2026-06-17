//write a program to merge arrays
#include<stdio.h>
int main()
{
    int i,n1,n2;
    printf("Enter length of first array: ");
    scanf("%d",&n1);
    int arr1[n1];
    printf("Enter %d elements in first array: ",n1);
    for(i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter length of second array: ");
    scanf("%d",&n2);
    int arr2[n2];
    printf("Enter %d elements in second array: ",n2);
    for(i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    int merged[n1+n2];
    for(i=0;i<n1;i++){
        merged[i]=arr1[i];
    }
    for(i=0;i<n2;i++){
        merged[n1+i]=arr2[i];
    }
    printf("Merged array is: ");
    for(i=0;i<n1+n2;i++){
        printf("%d\n",merged[i]);
    }
    return 0;
}