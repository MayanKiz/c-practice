#include <stdio.h>
#include <string.h>

int main() {
    char name[50], s1[20], s2[20];
    int len, cmp;

    printf("enter a string: ");
    if (fgets(name, sizeof(name), stdin) == NULL) {
        return 1;
    }

    name[strcspn(name, "\n")] = '\0';

    printf("you entered: ");
    puts(name);

    len = strlen(name);
    printf("length = %d\n", len);

    strcpy(s1, "hello");
    strcpy(s2, "hello");

    cmp = strcmp(s1, s2);
    printf("strcmp result = %d\n", cmp);

    return 0;
}
