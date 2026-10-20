#include <stdio.h>
#include <string.h>
int main(void) {
    char s[100], t;
    scanf("%99s", s);
    int i = 0, j = (int)strlen(s) - 1;
    while (i < j) { t = s[i]; s[i] = s[j]; s[j] = t; i++; j--; }
    printf("%s", s);
    return 0;
}
