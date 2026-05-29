//write a program to count digits in a number
#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter number");
    scanf("%d",&num);
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    printf("Number of digits in the given number is %d",count);
    return 0;
}