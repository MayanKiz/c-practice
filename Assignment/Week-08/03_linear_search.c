// Q3: Search for a key in an array of five integers.
#include <stdio.h>
int main(void) {
    int a[5], key, found = 0;
    for (int i = 0; i < 5; i++) scanf("%d", &a[i]);
    scanf("%d", &key);
    for (int i = 0; i < 5; i++) {
        if (a[i] == key) {
            printf("Found at position %d", i + 1);
            found = 1;
            break;
        }
    }
    if (!found) printf("Not Found");
    return 0;
}
