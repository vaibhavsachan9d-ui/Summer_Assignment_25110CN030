//write a program to find largest prime factor
#include <stdio.h>
int main()
{
    int num,largest=0;
    printf("Enter a number:");
    scanf("%d",&num);
    for(int i=2;i<=num;i++)
    {
        while(num%i==0)
        {
            largest=i;
            num/=i;
        }
    }
    printf("Largest prime factor is %d",largest);
    return 0;
}