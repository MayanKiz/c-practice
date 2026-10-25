// Q28. Find the length of a string
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[100];
    scanf("%99s", s);
    printf("Length = %zu\n", strlen(s));
    return 0;
}

/*
Input:
hello
Output:
Length = 5
*/