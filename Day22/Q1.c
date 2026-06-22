//write a program to check palindrome string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,length;
    int flag=1;
    printf("Enter string: ");
    fgets(str,sizeof(str),stdin);
    length=strlen(str);
    if(str[length-1]=='\n'){
        length--;
    }
    for(i=0;i<length/2;i++){
        if(str[i]!=str[length-1-i]){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("string is palindrome: ");
    }
    else{
        printf("Not palindrome: ");
    }
    return 0;
}