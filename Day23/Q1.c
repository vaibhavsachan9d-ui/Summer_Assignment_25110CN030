//write a program to find first non-repeating character
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j;
    int isRepeated;
    printf("Enter a string: ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        isRepeated=0;
        for(j=0;str[j]!='\0';j++){
            if(i!=j&&str[i]==str[j]){
                isRepeated=1;
                break;
            }
        }
        if(isRepeated==0){
            printf("First repeating character: %c\n",str[i]);
            return 0;
        }
    }
    printf("First non-repeating character found\n");
    return 0;
}