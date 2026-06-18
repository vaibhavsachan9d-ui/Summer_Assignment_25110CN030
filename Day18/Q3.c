//write a program to do binary search
#include<stdio.h>
int main()
{
    int i,key,n;
    printf("Enter length of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d element in array: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter element to be found: ");
    scanf("%d",&key);
    int low=0;
    int high=n-1;
    int found=0;
    while(low<=high){
         int mid=(low+high)/2;
        if(arr[mid]==key){
            printf("Element found at position %d\n: ",mid+1);
            found=1;
            break;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(found==0){
        printf("Element not found");
    }
    return 0;
}