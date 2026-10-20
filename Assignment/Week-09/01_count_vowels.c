// Q1: Count vowels in a word (input stops at whitespace).
#include <stdio.h>
int main(void) {
    char s[100];
    int count = 0;
    scanf("%99s", s);
    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U') count++;
    }
    printf("%d", count);
    return 0;
}
