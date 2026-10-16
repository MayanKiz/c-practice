#include <stdio.h>

int main() {
    int a = 10;
    int *p;

    p = &a;

    printf("address of a = %p\n", (void *)&a);
    printf("value of a = %d\n", *p);

    return 0;
}
