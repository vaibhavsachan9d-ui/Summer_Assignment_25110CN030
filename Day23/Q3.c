//write a program to checkk anagram strings
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int i, j, found;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    if (strlen(str1) != strlen(str2)) {
        printf("Not anagrams\n");
        return 0;
    }
    for (i = 0; str1[i] != '\0'; i++) {
        found = 0;
        for (j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j]) {
                found = 1;
                str2[j] = '#';
                break;
            }
        }
        if (found == 0) {
            printf("Not anagrams\n");
            return 0;
        }
    }
    printf("Anagrams\n");
    return 0;
}