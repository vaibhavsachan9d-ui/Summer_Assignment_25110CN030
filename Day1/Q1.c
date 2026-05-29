//write a program to calculate sum of first N natural numbers
#include <stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("Enter value of N:");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("sum of first N natural numbers is %d",sum);
    return 0;
}