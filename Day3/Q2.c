//write a program to print prime numbers in a range
#include <stdio.h>
int main()
{
    int num1,num2,i,j,flag=0;
    printf("Enter the range:");
    scanf("%d%d",&num1,&num2);
    printf("Prime numbers between %d and %d are:",num1,num2);
    for(i=num1;i<=num2;i++)
    {
        if(i==0||i==1)
        {
            continue;
        }
        flag=0;
        for(j=2;j<=i/2;j++)
        {
            if (i%j==0)
            {
                flag=1;
                break;
            }

        }
        if(flag==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
