//write a program to find product of digits
#include<stdio.h>
int main()
{
    int n,prod=1,r;
    printf("Enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        prod=prod*r;
        n=n/10;
    }
    printf("product of digits is %d",prod);
    return 0;
}