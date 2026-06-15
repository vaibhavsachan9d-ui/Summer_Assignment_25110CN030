//write a program to rotate array right
#include<stdio.h>
int main()
{
    int i,n,k;
    printf("Enter length of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter no. of right rotations:");
    scanf("%d",&k);
    k=k%n;
    int temp[k];
    for(i=0;i<k;i++){
        temp[i]=arr[n-k+i];
    }
    for(i=n-1;i>=k;i--){
        arr[i]=arr[i-k];
    }
    for(i=0;i<k;i++){
        arr[i]=temp[i];
    }
    printf("Array after right rotation: ");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}