//write a program to find pair with given sum
#include<stdio.h>
int main()
{
    int n,i,j,sum;
    printf("Enter length of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter required sum: ");
    scanf("%d",&sum);
    int found=0;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                printf("Pair found:%d + %d=%d\n",arr[i],arr[j],sum);
                found=1;
            }
        }
    }
    if(found==0){
        printf("No. of pairs sum %d\n",sum);
    }
    return 0;
}