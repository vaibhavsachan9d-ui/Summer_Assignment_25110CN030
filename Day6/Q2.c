//write a program to convert binary to decimal
#include<stdio.h>
int main()
{
    int binary,decimal=0,remainder,base=1;
    printf("Enter binary number:");
    scanf("%d",&binary);
    while(binary>0)
    {
        remainder=binary%10;
        decimal=decimal+remainder*base;
        binary=binary/10;
        base=base*2;
    }
    printf("Decimal number:%d",decimal);
    return 0;
}