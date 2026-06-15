//write a program to rotate array left
#include<stdio.h>
int main()
{
    int i,n,k;
    printf("Enter length of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d element: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter number of left rotations");
    scanf("%d",&k);
    k=k%n;
    int temp[k];
    for(i=0;i<k;i++){
        temp[i]=arr[i];
    }
    for(i=0;i<n-k;i++){
        arr[i]=arr[i+k];
    }
    for(i=0;i<k;i++){
        arr[n-k+i]=temp[i];
    }
    printf("Array after left rotations: ");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}