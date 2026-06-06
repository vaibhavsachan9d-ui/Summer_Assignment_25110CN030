//write a program to convert decimal to binary
#include <stdio.h>
int main()
{
    int decimal, binary=0, remainder, base=1;
    printf("Enter decimal number:");
    scanf("%d", &decimal);
    while(decimal>0)
    {
        remainder=decimal%2;
        binary=binary+remainder*base;
        decimal=decimal/2;
        base=base*10;
    }
    printf("Binary number:%d",binary);
    return 0;
}