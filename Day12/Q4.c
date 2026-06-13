//write a program to write function for perfect number
#include<stdio.h>
int isPerfect(int num)
{
    int sum=0;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    return (sum==num);
}

int main()
{
    int num;
    printf("Enter number");
    scanf("%d",&num);
    if(isPerfect(num))
    {
        printf("%d is perfect number",num);
    }
    else
    {
        printf("%d is not a perfect number",num);
    }
    return 0;
}