// Q29. Count words in a sentence
#include <stdio.h>

int main(void) {
    char s[200];
    int i, words = 0, in_word = 0;

    if (!fgets(s, sizeof(s), stdin)) return 0;

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t') {
            if (!in_word) words++;
            in_word = 1;
        } else {
            in_word = 0;
        }
    }

    printf("Words = %d\n", words);
    return 0;
}

/*
Input:
C programming is fun
Output:
Words = 4
*/