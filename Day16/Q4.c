//write a program to remove duplicates from array
#include<stdio.h>
int main(){
    int i,n,j;
    printf("Length of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array after removing duplicates:");
    for(i=0;i<n;i++){
        int isDuplicate=0;
        for(j=0;j<i;j++){
            if(arr[i]==arr[j]){
                isDuplicate=1;
                break;
            }
        }
        if(isDuplicate==0){
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}