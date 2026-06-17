//write a program to do union of arrays
#include<stdio.h>
int main()
{
    int i,n1,n2,j,found;
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
    printf("Enter %d elements in second array: ",n2);
    for(i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    int Unionarr[n1+n2];
    int size=0;
    for(i=0;i<n1;i++){
        Unionarr[size++]=arr1[i];
    }
    for(i=0;i<n2;i++){
        found=0;
        for(j=0;j<size;j++){
            if(arr2[i]==Unionarr[j]){
                found=1;
                break;
            }
        }
        if(found==0){
            Unionarr[size++]=arr2[i];
        }
    }
    printf("Union of arrays: ");
    for(i=0;i<size;i++){
        printf("%d\n",Unionarr[i]);
    }
    return 0;
}