//write a program to check whether a number is palindrome
#include<stdio.h>
int main()
{
    int n,rev=0,r,temp;
    printf("Enter a number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(temp==rev)
        printf("The number is palindrome");
    else
        printf("The number is not palindrome");
    return 0;
}