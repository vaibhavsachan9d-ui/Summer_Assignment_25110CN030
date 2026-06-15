//write a program to move zeroes to end
#include<stdio.h>
int main()
{
    int i,n,j=0;
    printf("Enter length of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]!=0){
            arr[j++]=arr[i];
        }
    }
    while(j<n){
        arr[j++]=0;
    }
    printf("Array after moving zeroes to the end:\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}