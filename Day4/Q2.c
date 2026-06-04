//write a program to find nth fibonacci term
#include <stdio.h>
int main()
{
    int n,a=0,b=1,i,next;
    printf("Enter the term number:");
    scanf("%d",&n);
    if(n==1)
    {
        printf("The %dth term of the Fibonacci series is %d",n,a);
    }
    else if(n==2)
    {
        printf("The %dth term of the Fibonacci series is %d",n,b);
    }
    else
    {
        for(i=3;i<=n;i++)
        {
            next=a+b;
            a=b;
            b=next;
        }
        printf("The %dth term of the Fibonacci series is %d",n,next);
    }
    return 0;
}