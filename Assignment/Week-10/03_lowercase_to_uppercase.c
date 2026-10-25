// Q30. Convert lowercase letters to uppercase
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s[100];
    int i;

    scanf("%99s", s);

    for (i = 0; s[i] != '\0'; i++)
        s[i] = (char)toupper((unsigned char)s[i]);

    printf("%s\n", s);
    return 0;
}

/*
Input:
hello
Output:
HELLO
*/