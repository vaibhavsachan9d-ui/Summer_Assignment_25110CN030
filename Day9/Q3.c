//write a program to printf repeated character pattern
#include<stdio.h>
int main()
{
    int i,j,n;
    char ch;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    printf("Enter the character:");
    scanf(" %c",&ch);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",ch);
        }
        printf("\n");
    }
    return 0;
}