//write a program to find longest word
#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    char longest[50];
    char word[50];
    int i, j = 0;
    int maxLen = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }
            j = 0;
        }
    }
    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);
    return 0;
}