//write a program to write function for armstrong
#include<stdio.h>
#include<math.h>
int isArmstrong(int num)
{
    int originalNum,remainder,result=0,n=0;
    originalNum=num;
    while(originalNum!=0)
    {
        originalNum=originalNum/10;
        n++;
    }
    originalNum=num;
    while(originalNum!=0)
    {
        remainder=originalNum%10;
        result+=(int)round(pow(remainder,n));
        originalNum=originalNum/10;
    }
    if(result==num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(isArmstrong(num))
    {
        printf("%d is an Armstrong number",num);
    }
    else
    {
        printf("%d is not an Armstrong number",num);
    }
    return 0;
}