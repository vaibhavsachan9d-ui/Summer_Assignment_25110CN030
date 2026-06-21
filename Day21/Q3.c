//write a program to count vowels and consonants
#include<stdio.h>
int main()
{
    char str[100];
    int i=0,vowels=0,consonants=0;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            vowels++;
        }
        else{
            consonants++;
        }
    }
    printf("Vowels are %d ",vowels);
    printf("Consonants are %d ",consonants);
    return 0;
}