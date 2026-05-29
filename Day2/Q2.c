//write a program to reverse a number
#include<stdio.h>
int main()
{
    int n,rev=0,r;
    printf("Enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("Reverse of the number is %d",rev);
    return 0;
}