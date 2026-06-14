//write a program to find frequency of an element
#include<stdio.h>
int main()
{
    int n,i,key,count=0;
    printf("Enter length of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter element whose frequency is to be counted");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(arr[i]==key){
            count++;
        }
    }
    printf("Frequency of %d is %d",key,count);
    return 0;
}