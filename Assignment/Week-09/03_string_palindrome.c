#include <stdio.h>
#include <string.h>
int main(void) {
    char s[100];
    int palindrome = 1;
    scanf("%99s", s);
    int i = 0, j = (int)strlen(s) - 1;
    while (i < j) {
        if (s[i] != s[j]) { palindrome = 0; break; }
        i++; j--;
    }
    printf(palindrome ? "Palindrome" : "Not Palindrome");
    return 0;
}
