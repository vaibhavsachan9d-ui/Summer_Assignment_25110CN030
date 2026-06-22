//write a program to count no. of words in a string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,count=0;
    printf("Enter string: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '&&str[i+1]!=' '&&str[i+1]!='0'){
            count++;
        }
    }
    count++;
    printf("No.of words %d: ",count);
    return 0;
}