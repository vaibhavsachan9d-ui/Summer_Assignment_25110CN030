//write a program to printf common elements
#include<stdio.h>
int main()
{
    int i,j,n1,n2;
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
    printf("Enter %d elemetns in second array: ",n2);
    for(i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    printf("Common elements are:");
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if (arr1[i]==arr2[j]){
                printf("%d\t",arr1[i]);
                break;
            }
        }
    }
    return 0;
    }
