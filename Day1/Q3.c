//write a program to find factorial of a iven number
#include<stdio.h>
int main()
{
    int num,fact=1;
    printf("enter number");
    scanf("%d",&num);
    for(int i=1;i<num;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is %d",num,fact);
    return 0;
}