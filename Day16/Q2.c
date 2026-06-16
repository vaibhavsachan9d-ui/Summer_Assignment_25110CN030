//write a program to find maximum frequency element
#include<stdio.h>
int main()
{
    int i,n,j;
    printf("Enter length of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int maxFreq=0;
    int maxElement=arr[0];
    for(i=0;i<n;i++){
        int count=1;
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>maxFreq){
            maxFreq=count;
            maxElement=arr[i];
        }
    }
    printf("Element with maximum frequency is %d\n: ",maxElement);
    printf("Frequency=%d\n: ",maxFreq);
    return 0;
}