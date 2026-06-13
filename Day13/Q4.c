//write a program to count even and odd elements in array
#include<stdio.h>
int main()
{
    int n,i,even=0,odd=0;
    printf("Enter length of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("No.of even elements are %d: ",even);
    printf("No.of odd elements are %d: ",odd);
    return 0;
}