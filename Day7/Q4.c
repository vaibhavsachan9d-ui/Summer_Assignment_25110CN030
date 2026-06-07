//write a program to recursive reverse number
#include<stdio.h>
int reverseNumber(int n,int rev){
    if(n==0){
        return rev;
    }
    else{
        rev=rev*10+n%10;
        return reverseNumber(n/10,rev);
    }
}

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Reverse of %d is %d",n,reverseNumber(n,0));
    return 0;
}