//write a program to find duplicates in array
#include<stdio.h>
int main()
{
    int i,n,j;
    printf("Enter length of array: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Duplicate elements are :\n");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d\n",arr[i]);
                break;
            }
        }
    }
    return 0;
}