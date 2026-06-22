//write a program to count character frequency
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,count;
    printf("Enter string: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++){
        count=1;
        for(j=0;j<i;j++){
            if(str[i]==str[j]){
                break;
            }
        }
            if(j<i){
                continue;
            }
            for(j=i+1;str[j]!='\0';j++){
                if(str[i]==str[j]){
                    count++;
                }
            }
        printf("%c=%d\n",str[i],count);
    }
    return 0;
}