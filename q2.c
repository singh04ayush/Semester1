#include <stdio.h>
#include <string.h>

int length(char *s) {
    int len = strlen(s);
    int lastWord = 0;
    int i = len - 1;

    // Skip trailing spaces
    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    // Calculate length of last word
    while (i >= 0 && s[i] != ' ') {
        lastWord++;
        i--;
    }

    return lastWord;
}

int main() {
    char s1[] = "Hello World";
    printf("Length of last word is %d\n",length(s1));

    char s2[] = "   fly me   to   the moon ";
    printf("Length of last word is %d",length(s2));
    return 0;
}
